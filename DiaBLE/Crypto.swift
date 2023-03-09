import Foundation
import CommonCrypto
import CryptoSwift


// https://github.com/LoopKit/OmniBLE/blob/dev/OmniBLE/Bluetooth/EnDecrypt/EnDecrypt.swift


extension Libre3 {

    static func testAESCCM() {
        // func testAESCCMTestCase1Decrypt()
        let key: Array<UInt8> = [0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f]
        let nonce: Array<UInt8> = [0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16]
        let aad: Array<UInt8> = [0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07]
        let ciphertext: Array<UInt8> = [0x71, 0x62, 0x01, 0x5b, 0x4d, 0xac, 0x25, 0x5d]
        let expected: Array<UInt8> = [0x20, 0x21, 0x22, 0x23]

        let aes = try! AES(key: key, blockMode: CCM(iv: nonce, tagLength: 4, messageLength: ciphertext.count - 4, additionalAuthenticatedData: aad), padding: .noPadding)
        let decrypted = try! aes.decrypt(ciphertext)

        print("TEST: ciphertext: \(ciphertext), decrypted: \(decrypted), expected: \(expected)")

    }

}


// https://github.com/LoopKit/CGMBLEKit/blob/dev/CGMBLEKit/AESCrypt.m
// https://github.com/Faifly/xDrip/blob/develop/xDrip/Services/Bluetooth/DexcomG6/Logic/Messages/Outgoing/DexcomG6AuthChallengeTxMessage.swift


extension Data {

    func aes128Encrypt(keyData: Data) -> Data? {
        guard keyData.count == kCCKeySizeAES128 else { return nil }

        let cryptLength = size_t(count + kCCBlockSizeAES128)
        var cryptData = Data(count: cryptLength)

        var numBytesEncrypted: size_t = 0
        let options = CCOptions(kCCOptionPKCS7Padding | kCCOptionECBMode)

        let cryptStatus: CCCryptorStatus = cryptData.withUnsafeMutableBytes {
            guard let cryptBytes = $0.baseAddress else {
                return CCCryptorStatus(kCCMemoryFailure)
            }
            let cryptStatus: CCCryptorStatus = self.withUnsafeBytes {
                guard let dataBytes = $0.baseAddress else {
                    return CCCryptorStatus(kCCMemoryFailure)
                }
                return keyData.withUnsafeBytes {
                    guard let keyBytes = $0.baseAddress else {
                        return CCCryptorStatus(kCCMemoryFailure)
                    }
                    return CCCrypt(
                        CCOperation(kCCEncrypt),
                        CCAlgorithm(kCCAlgorithmAES),
                        options,
                        keyBytes,
                        kCCKeySizeAES128,
                        nil,
                        dataBytes,
                        self.count,
                        cryptBytes,
                        cryptLength,
                        &numBytesEncrypted
                    )
                }
            }
            return cryptStatus
        }

        if UInt32(cryptStatus) == UInt32(kCCSuccess) {
            cryptData.count = numBytesEncrypted
        } else {
            return nil
        }
        return cryptData
    }
}

import Foundation


struct OOP {

    enum TrendArrow: Int, CustomStringConvertible, CaseIterable, Codable {
        case unknown        = -1
        case notDetermined  = 0
        case fallingQuickly = 1
        case falling        = 2
        case stable         = 3
        case rising         = 4
        case risingQuickly  = 5

        var description: String {
            switch self {
            case .notDetermined:  "NOT_DETERMINED"
            case .fallingQuickly: "FALLING_QUICKLY"
            case .falling:        "FALLING"
            case .stable:         "STABLE"
            case .rising:         "RISING"
            case .risingQuickly:  "RISING_QUICKLY"
            default:              ""
            }
        }

        init(string: String) {
            for arrow in TrendArrow.allCases {
                if string == arrow.description {
                    self = arrow
                    return
                }
            }
            self = .unknown
        }

        var symbol: String {
            switch self {
            case .fallingQuickly: "↓"
            case .falling:        "↘︎"
            case .stable:         "→"
            case .rising:         "↗︎"
            case .risingQuickly:  "↑"
            default:              "---"
            }
        }
    }

    enum Alarm: Int, CustomStringConvertible, CaseIterable, Codable {
        case unknown              = -1
        case notDetermined        = 0
        case lowGlucose           = 1
        case projectedLowGlucose  = 2
        case glucoseOK            = 3
        case projectedHighGlucose = 4
        case highGlucose          = 5

        var description: String {
            switch self {
            case .notDetermined:        "NOT_DETERMINED"
            case .lowGlucose:           "LOW_GLUCOSE"
            case .projectedLowGlucose:  "PROJECTED_LOW_GLUCOSE"
            case .glucoseOK:            "GLUCOSE_OK"
            case .projectedHighGlucose: "PROJECTED_HIGH_GLUCOSE"
            case .highGlucose:          "HIGH_GLUCOSE"
            default:                    ""
            }
        }

        init(string: String) {
            for alarm in Alarm.allCases {
                if string == alarm.description {
                    self = alarm
                    return
                }
            }
            self = .unknown
        }

        var shortDescription: String {
            switch self {
            case .lowGlucose:           "LOW"
            case .projectedLowGlucose:  "GOING LOW"
            case .glucoseOK:            "OK"
            case .projectedHighGlucose: "GOING HIGH"
            case .highGlucose:          "HIGH"
            default:                    ""
            }
        }
    }

}

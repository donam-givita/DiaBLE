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
            case .notDetermined:  return "NOT_DETERMINED"
            case .fallingQuickly: return "FALLING_QUICKLY"
            case .falling:        return "FALLING"
            case .stable:         return "STABLE"
            case .rising:         return "RISING"
            case .risingQuickly:  return "RISING_QUICKLY"
            default:              return ""
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
            case .fallingQuickly: return "↓"
            case .falling:        return "↘︎"
            case .stable:         return "→"
            case .rising:         return "↗︎"
            case .risingQuickly:  return "↑"
            default:              return "---"
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
            case .notDetermined:        return "NOT_DETERMINED"
            case .lowGlucose:           return "LOW_GLUCOSE"
            case .projectedLowGlucose:  return "PROJECTED_LOW_GLUCOSE"
            case .glucoseOK:            return "GLUCOSE_OK"
            case .projectedHighGlucose: return "PROJECTED_HIGH_GLUCOSE"
            case .highGlucose:          return "HIGH_GLUCOSE"
            default:                    return ""
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
            case .lowGlucose:           return "LOW"
            case .projectedLowGlucose:  return "GOING LOW"
            case .glucoseOK:            return "OK"
            case .projectedHighGlucose: return "GOING HIGH"
            case .highGlucose:          return "HIGH"
            default:                    return ""
            }
        }
    }

}

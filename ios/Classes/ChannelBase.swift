class ChannelBase: NSObject {
    func resultSuccess(result: @escaping FlutterResult, resp: Any?) {
        DispatchQueue.main.async{
            result(resp)
        }
    }
    
    func resultError(result: @escaping FlutterResult, error: NSError?, code: String? = "") {
        DispatchQueue.main.async{
            result(FlutterError(code: code ?? "", message: error?.localizedDescription, details: ""))
        }
    }
    func resultError(result: @escaping FlutterResult, error: Error?, code: String? = "") {
        DispatchQueue.main.async{
            result(FlutterError(code: code ?? "", message: error?.localizedDescription, details: ""))
        }
    }
    func resultError(result: @escaping FlutterResult, code: String? = "", message: String? = "", details: String? = "") {
        DispatchQueue.main.async{
            result(FlutterError(code: code ?? "", message: message, details: details))
        }
    }
    
    func eventSinkSuccess(eventSink: FlutterEventSink?, resp: Any?) {
        guard let es = eventSink else {
            return
        }
        DispatchQueue.main.async {
            es(resp)
        }
    }
    func eventSinkError(eventSink: FlutterEventSink?, error: NSError?, code: String? = "") {
        guard let es = eventSink else {
            return
        }
        DispatchQueue.main.async {
            es(FlutterError(code: code ?? "", message: error?.localizedDescription, details: ""))
        }
    }
    func eventSinkError(eventSink: FlutterEventSink?, error: Error?, code: String? = "") {
        guard let es = eventSink else {
            return
        }
        DispatchQueue.main.async {
            es(FlutterError(code: code ?? "", message: error?.localizedDescription, details: ""))
        }
    }
    func eventSinkError(eventSink: FlutterEventSink?, code: String? = "", message: String? = "", details: String? = "") {
        guard let es = eventSink else {
            return
        }
        DispatchQueue.main.async {
            es(FlutterError(code: code ?? "", message: message, details: details))
        }
    }
}

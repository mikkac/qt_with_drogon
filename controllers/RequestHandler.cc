#include "RequestHandler.h"
void RequestHandler::DoSomething(const HttpRequestPtr &req,
                                 std::function<void(const HttpResponsePtr &)> &&callback) const
{
    LOG_DEBUG << "RequestHandler::DoSomething called";
    Json::Value ret;
    ret["result"] = "ok";
    ret["token"] = drogon::utils::getUuid;
    auto rsp = HttpResponse::newHttpJsonResponse(ret);
    callback(rsp);
}

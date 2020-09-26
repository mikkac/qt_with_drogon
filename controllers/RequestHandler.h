#pragma once
#include <drogon/HttpController.h>
using namespace drogon;
class RequestHandler : public drogon::HttpController<RequestHandler>
{
  public:
    METHOD_LIST_BEGIN
    METHOD_ADD(RequestHandler::DoSomething, "/doSomething", Get);
    METHOD_LIST_END

    void DoSomething(const HttpRequestPtr &req,
                     std::function<void(const HttpResponsePtr &)> &&callback) const;
};

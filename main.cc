#include <QCoreApplication>
#include <drogon/drogon.h>
int main(int argc, char **argv)
{
    // Set HTTP listener address and port
    QCoreApplication a(argc, argv);

    drogon::app().addListener("0.0.0.0", 80);
    std::thread backend_thread([]() { drogon::app().run(); });
    return a.exec();
}

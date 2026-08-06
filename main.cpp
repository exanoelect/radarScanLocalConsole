#include <QCoreApplication>
#include <QDebug>

#include "appcontroller.h"

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);
    QCoreApplication::setApplicationName("radarScanLocalConsole");

    AppController controller;

    qInfo() << "radarScanLocalConsole started";
    return app.exec();
}

#ifndef CONFIGMANAGER_H
#define CONFIGMANAGER_H

#include <QString>

class ConfigManager
{
public:
    static QString getServerIp();
    static QString getServerIpDNS();
    static int getServerPort();
    static QString getRadar1Port();
    static QString getRadar2Port();
    static int getDropHeightThreshold();
    static int getCurveFilterActive();
    static QString getSerialNumber();
    //static int getHistorySize();
    //static int getTargetCountSize();
};

#endif // CONFIGMANAGER_H

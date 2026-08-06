#include "configmanager.h"
#include <QSettings>
#include <QCoreApplication>

//--------------------------------------------------------------------------------------
QString ConfigManager::getServerIp()
{
    //QString configPath = QCoreApplication::applicationDirPath() + "/config.ini";
#ifdef Q_OS_LINUX
    QString configPath = "/opt/app/configlocal.ini";
#else
    QString configPath = "/Volumes/DATA/app/config.ini";
#endif

    QSettings settings(configPath, QSettings::IniFormat);
    return settings.value("Server/ip", "127.0.0.1").toString();
}

//--------------------------------------------------------------------------------------
QString ConfigManager::getServerIpDNS()
{
    //QString configPath = QCoreApplication::applicationDirPath() + "/config.ini";
#ifdef Q_OS_LINUX
    QString configPath = "/opt/app/configlocal.ini";
#else
    QString configPath = "/Volumes/DATA/app/config.ini";
#endif

    QSettings settings(configPath, QSettings::IniFormat);
    return settings.value("Server/ipdns", "127.0.0.1").toString();
}

//--------------------------------------------------------------------------------------
int ConfigManager::getServerPort()
{
    //QString configPath = QCoreApplication::applicationDirPath() + "/config.ini";
#ifdef Q_OS_LINUX
    QString configPath = "/opt/app/configlocal.ini";
#else
    QString configPath = "/Volumes/DATA/app/config.ini";
#endif
    QSettings settings(configPath, QSettings::IniFormat);
    return settings.value("Server/port", 3000).toInt();
}

//--------------------------------------------------------------------------------------
QString ConfigManager::getRadar1Port()
{
    //QString configPath = QCoreApplication::applicationDirPath() + "/config.ini";
#ifdef Q_OS_LINUX
    QString configPath = "/opt/app/configlocal.ini";
#else
    QString configPath = "/Volumes/DATA/app/config.ini";
#endif
    QSettings settings(configPath, QSettings::IniFormat);
    return settings.value("Fall/port1", 3000).toString();
}

//--------------------------------------------------------------------------------------
QString ConfigManager::getRadar2Port()
{
    //QString configPath = QCoreApplication::applicationDirPath() + "/config.ini";
#ifdef Q_OS_LINUX
    QString configPath = "/opt/app/configlocal.ini";
#else
    QString configPath = "/Volumes/DATA/app/config.ini";
#endif
    QSettings settings(configPath, QSettings::IniFormat);
    return settings.value("Fall/port2", 3000).toString();
}

//--------------------------------------------------------------------------------------
int ConfigManager::getDropHeightThreshold()
{
    //QString configPath = QCoreApplication::applicationDirPath() + "/config.ini";
#ifdef Q_OS_LINUX
    QString configPath = "/opt/app/configlocal.ini";
#else
    QString configPath = "/Volumes/DATA/app/config.ini";
#endif
    QSettings settings(configPath, QSettings::IniFormat);
    return settings.value("Fall/rapidheightthreshold", 3000).toInt();
}

//--------------------------------------------------------------------------------------
int ConfigManager::getCurveFilterActive()
{
    //QString configPath = QCoreApplication::applicationDirPath() + "/config.ini";
#ifdef Q_OS_LINUX
    QString configPath = "/opt/app/configlocal.ini";
#else
    QString configPath = "/Volumes/DATA/app/config.ini";
#endif
    QSettings settings(configPath, QSettings::IniFormat);
    return settings.value("Fall/filterCurve", 3000).toInt();
}

//--------------------------------------------------------------------------------------
QString ConfigManager::getSerialNumber()
{
    //QString configPath = QCoreApplication::applicationDirPath() + "/config.ini";
#ifdef Q_OS_LINUX
    QString configPath = "/opt/app/configlocal.ini";
#else
    QString configPath = "/Volumes/DATA/app/config.ini";
#endif
    QSettings settings(configPath, QSettings::IniFormat);
    return settings.value("Server/serialnumber", 3000).toString();
}

/*
//--------------------------------------------------------------------------------------
int ConfigManager::getHistorySize()
{
    //QString configPath = QCoreApplication::applicationDirPath() + "/config.ini";
#ifdef Q_OS_LINUX
    QString configPath = "/opt/app/config.ini";
#else
    QString configPath = "/Volumes/DATA/app/config.ini";
#endif
    QSettings settings(configPath, QSettings::IniFormat);
    return settings.value("Fall/historySize", 3000).toInt();
}

//--------------------------------------------------------------------------------------
int ConfigManager::getTargetCountSize()
{
    //QString configPath = QCoreApplication::applicationDirPath() + "/config.ini";
#ifdef Q_OS_LINUX
    QString configPath = "/opt/app/config.ini";
#else
    QString configPath = "/Volumes/DATA/app/config.ini";
#endif
    QSettings settings(configPath, QSettings::IniFormat);
    return settings.value("Fall/targetCountSize", 3000).toInt();
}
*/

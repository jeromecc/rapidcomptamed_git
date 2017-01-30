#ifndef CONFIGMEDINTUXINI_H
#define CONFIGMEDINTUXINI_H

#include "ui_configmedintuxini.h"
#include <QWidget>


class ConfigMedintuxIni:public QWidget, public Ui::ConfigMedintuxIniWidget
{
    Q_OBJECT
    public:
        ConfigMedintuxIni (QWidget * parent = 0);
        ~ConfigMedintuxIni ();

    protected slots:
        void writeWidgetNewDatasInIniFile();
    private:
        void settingWidgetDatas();
};

#endif


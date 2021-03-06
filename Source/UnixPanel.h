#ifndef UNIXWINPANEL_H
#define UNIXWINPANEL_H

#include "MainPanel.h"

class UnixWindow;

class UnixPanel : public MainPanel
{
    Q_OBJECT

public:
    UnixPanel(UnixWindow* panel);

public slots:
    void pushButtonMinimize();
    void pushButtonMaximize();
    void pushButtonClose();

private:
    UnixWindow* unixPanel;

};

#endif // UNIXMAINPANEL_H

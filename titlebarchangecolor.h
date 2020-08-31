#ifndef TITLEBARCHANGECOLOR_H
#define TITLEBARCHANGECOLOR_H
#include <windows.h>
#include <stdio.h>
#include <QDebug>
#pragma comment(lib, "user32.lib")


class TitleBarChangeColor: public QObject
{
    Q_OBJECT
public:
    TitleBarChangeColor();

    int aElements[3] = {COLOR_WINDOW, COLOR_WINDOWFRAME, COLOR_WINDOWTEXT};
    DWORD aOldColors[3];
    DWORD aNewColors[3];

public slots:
    void getCurrentColor();
    void hello();
    void setCurrentWindowColor();

};

#endif // TITLEBARCHANGECOLOR_H

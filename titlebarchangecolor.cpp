#include "titlebarchangecolor.h"


TitleBarChangeColor::TitleBarChangeColor()
{

}

void TitleBarChangeColor::hello()
{
    qDebug("Hello");
}

void TitleBarChangeColor::setCurrentWindowColor()
{
    aNewColors[0] = RGB(0x55, 0x99, 0x22);  // green
    aNewColors[1] = RGB(0x55, 0x99, 0x22);  // green
    aNewColors[2] = RGB(0x55, 0x99, 0x22);  // green
    SetSysColors(3, aElements, aNewColors);
    qDebug("Colori cambiati");
    Sleep(5000);
    SetSysColors(3, aElements, aOldColors);
    qDebug("Colori ricambiati");

}

void TitleBarChangeColor::getCurrentColor()
{
    aOldColors[0] = GetSysColor(aElements[0]);
    qDebug("Current COLOR_WINDOW: {0x%x, 0x%x, 0x%x}\n",
        GetRValue(aOldColors[0]),
        GetGValue(aOldColors[0]),
        GetBValue(aOldColors[0]));

    aOldColors[1] = GetSysColor(aElements[1]);
    qDebug("Current COLOR_WINDOWFRAME: {0x%x, 0x%x, 0x%x}\n",
        GetRValue(aOldColors[1]),
        GetGValue(aOldColors[1]),
        GetBValue(aOldColors[1]));

    aOldColors[2] = GetSysColor(aElements[2]);
    qDebug("Current COLOR_WINDOWTEXT: {0x%x, 0x%x, 0x%x}\n",
        GetRValue(aOldColors[2]),
        GetGValue(aOldColors[2]),
        GetBValue(aOldColors[2]));

}



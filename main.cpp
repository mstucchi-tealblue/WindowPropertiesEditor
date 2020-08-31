#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <windows.h>
#include <stdio.h>
#include <QDebug>
#include "titlebarchangecolor.h"
#include <QQmlContext>
#pragma comment(lib, "user32.lib")


/*
 *
  BOOL SetSysColors(
  int            cElements,
  const INT      *lpaElements,
  const COLORREF *lpaRgbValues
    );
 *
*/

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    TitleBarChangeColor myObject;
    engine.rootContext()->setContextProperty(QStringLiteral("myObject"), &myObject);





//    // Get the current color of the active caption.

//    aOldColors[1] = GetSysColor(aElements[1]);

//    qDebug("Current active caption color: {0x%x, 0x%x, 0x%x}\n",
//        GetRValue(aOldColors[1]),
//        GetGValue(aOldColors[1]),
//        GetBValue(aOldColors[1]));

//    // Define new colors for the elements

//    aNewColors[0] = RGB(0x80, 0x80, 0x80);  // light gray
//    aNewColors[1] = RGB(0x80, 0x00, 0x80);  // dark purple

//    qDebug("\nNew window color: {0x%x, 0x%x, 0x%x}\n",
//        GetRValue(aNewColors[0]),
//        GetGValue(aNewColors[0]),
//        GetBValue(aNewColors[0]));

//    qDebug("New active color desktop: {0x%x, 0x%x, 0x%x}\n",
//        GetRValue(aNewColors[1]),
//        GetGValue(aNewColors[1]),
//        GetBValue(aNewColors[1]));

//    // Set the elements defined in aElements to the colors defined
//    // in aNewColors

//    SetSysColors(2, aElements, aNewColors);

//    qDebug("\nWindow background and active border have been changed.\n");
//    qDebug("Reverting to previous colors in 10 seconds...\n");

//    //Sleep(1000);

//    // Restore the elements to their original colors

//    SetSysColors(2, aElements, aOldColors);



    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}

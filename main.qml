import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.5
import QtWinExtras 1.0 as Win

ApplicationWindow{
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    color: dwm.compositionEnabled ? "transparent" : dwm.realColorizationColor
    Win.DwmFeatures {
        id: dwm
        topGlassMargin: -1
        leftGlassMargin: -1
        rightGlassMargin: -1
        bottomGlassMargin: -1
    }

    //flags: Qt.FramelessWindowHint

    Rectangle {
        id:root
        anchors.centerIn: parent
        width: 100
        height: 100
        color:"lightblue"

        Button {
            anchors.fill: parent
            text: "Click me"
            //onClicked: myObject.getCurrentColor()
            onDoubleClicked:myObject.setCurrentWindowColor()
        }
    }
}

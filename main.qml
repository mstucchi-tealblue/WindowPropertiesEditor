import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.5
import QtWinExtras 1.0 as Win

ApplicationWindow{
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")    
    //flags: Qt.FramelessWindowHint

    Rectangle {
        id:root
        anchors.centerIn: parent
        width: 100
        height: 100
        color:"lightblue"
        Label {
            text: "Click the button one time to get window colours, two times to set them green"
            anchors.horizontalCenter: parent.horizontalCenter
            y:120
        }


        Button {
            anchors.fill: parent
            text: "button"
            onClicked: myObject.getCurrentColor()
            onDoubleClicked:myObject.setCurrentWindowColor()

        }

    }
}

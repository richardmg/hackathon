import QtQuick 2.1
import QtQuick.Window 2.1

Window {
    width: 480
    height: 640
    visible: true
    visibility: Window.AutomaticVisibility
    objectName: "Root"

    Rectangle {
        id: rectangle
        objectName: "myRectangle"
        width: 200
        height: 200
        color: "red"

        Rectangle {
            id: rectangle2
            objectName: "myRectangle2"
            width: parent.width / 2
            height: parent.height / 2
            color: "blue"
        }
    }

    Timer {
        interval: 1000;
        running: true
        onTriggered: rectangle.width = 100
    }
}

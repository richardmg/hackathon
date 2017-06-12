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

        Text {
            id: text
            objectName: "myText"
            text: "Click me"
            font.pixelSize: 30
        }

        MouseArea {
            anchors.fill: parent
            onClicked: rectangle.width = 300
        }
    }
}

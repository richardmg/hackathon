import QtQuick 2.1
import QtQuick.Controls 1.4

Item {
    objectName: "Spaceship"

    implicitWidth: parent.width
    implicitHeight: parent.height

    Column {
        x: 20
        y: 20
        spacing: 20

        Rectangle {
            id: colorRect
            objectName: "colorRect"
            width: 50
            height: 50
            color: "green"
        }

        Button {
            text: "Set blue color"
            onClicked: colorRect.color = "blue"
        }

        Button {
            text: "Set random color"
            onClicked: codebehind_Spaceship.setRandomColor();
        }

    }

}

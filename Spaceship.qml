import QtQuick 2.1
import QtQuick.Controls 1.4

Item {
    // todo: use filename (Spaceship(.qml)) rather than a codeBehind- or objectName property
    property string codeBehind: "Spaceship"

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
            objectName: "blueButton"
            text: "Set blue color"
        }

        Button {
            text: "Set random color"
            onClicked: codebehind_Spaceship.setRandomColor();
        }

    }

}

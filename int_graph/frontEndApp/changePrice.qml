import QtQuick 2.0
import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12

Item {
    width: 650
    height: 400

    ColumnLayout {

        anchors.fill: parent
        anchors.margins: 10
        spacing: 10

        Rectangle {
            id: titleRect
            Text {
                text: "Changer le prix d'un repas"
                font.bold: true
                font.pixelSize: 20
                anchors.horizontalCenter: parent.horizontalCenter
            }
            Layout.fillWidth: true
        }




    }
}
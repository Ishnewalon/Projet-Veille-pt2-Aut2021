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
                text: "Changer votre mot de passe"
                font.bold: true
                font.pixelSize: 20
                anchors.horizontalCenter: parent.horizontalCenter
            }
            Layout.fillWidth: true
        }

        Rectangle {
            id: empIdRect
            Label {
                id: empIdLabel
                text: "Numero d'employe"
                anchors.bottom: empIdInput.top
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.margins: 10
            }

            TextField {
                id: empIdInput
                placeholderText: qsTr("Entrez votre numreo d'employe")
                anchors.horizontalCenter: parent.horizontalCenter
                width: 300
            }
            Layout.fillWidth: true
        }



    }
}

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
        Rectangle {
            id: tableNameRect
            Label {
                id: tableNameLabel
                text: "De quel menu provient le prix a changer? (Souper, Diner, Dejeuner, etc)"
                anchors.bottom: tableNameInput.top
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.margins: 10
            }

            TextField {
                id: tableNameInput
                placeholderText: qsTr("Entrez le menu")
                anchors.horizontalCenter: parent.horizontalCenter
                width: 300
            }
            Layout.fillWidth: true
        }

        Rectangle {
            id: menuItemNameRect
            Label {
                id: menuItemNameLabel
                text: "Nom du plat"
                anchors.bottom: menuItemNameInput.top
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.margins: 10
            }

            TextField {
                id: menuItemNameInput
                placeholderText: qsTr("Entrez le nom du plat")
                anchors.horizontalCenter: parent.horizontalCenter
                width: 300
            }
            Layout.fillWidth: true
        }

        Rectangle {
            id: newPriceRect
            Label {
                id: newPriceLabel
                text: "Nouveau prix"
                anchors.bottom: newPriceInput.top
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.margins: 10
            }

            TextField {
                id: newPriceInput
                placeholderText: qsTr("Entrez le prix")
                anchors.horizontalCenter: parent.horizontalCenter
                width: 300
            }
            Layout.fillWidth: true
        }

    }
}

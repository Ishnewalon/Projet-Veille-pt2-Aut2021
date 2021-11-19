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
                text: "Quelle menu voulez-vous?"
                font.bold: true
                font.pixelSize: 20
            }
            Layout.fillWidth: true
        }

        Rectangle {
            id: dejeunerRect
            Button {
                id: dejeunerButton
                text: "Dejeuner"
                anchors.horizontalCenter: parent.horizontalCenter
                onClicked: {
                    backend.fillMenuList("dejeuner");
                    pageLoader.source("aPage.qml");
                }
            }
            Layout.fillWidth: true
        }

        Rectangle {
            id: dinerRect
            Button {
                id: dinerButton
                text: "Diner"
                anchors.horizontalCenter: parent.horizontalCenter
                onClicked: {
                    backend.fillMenuList("diner");
                    pageLoader.source("aPage.qml");
                }
            }
            Layout.fillWidth: true
        }

        Rectangle {
            id: souperRect
            Button {
                id: souperButton
                text: "Souper"
                anchors.horizontalCenter: parent.horizontalCenter
                onClicked: {
                    backend.fillMenuList("souper");
                    pageLoader.source("aPage.qml");
                }
            }
            Layout.fillWidth: true
        }

        Rectangle {
            id: comboRect
            Button {
                id: comboButton
                text: "Combo"
                anchors.horizontalCenter: parent.horizontalCenter
                onClicked: {
                    backend.fillMenuList("combe");
                    pageLoader.source("aPage.qml");
                }
            }
            Layout.fillWidth: true
        }

        Rectangle {
            id: breuvageRect
            Button {
                id: breuvageButton
                text: "Breuvage"
                anchors.horizontalCenter: parent.horizontalCenter
                onClicked: {
                    backend.fillMenuList("breuvage");
                    pageLoader.source("aPage.qml");
                }
            }
            Layout.fillWidth: true
        }
    }
}

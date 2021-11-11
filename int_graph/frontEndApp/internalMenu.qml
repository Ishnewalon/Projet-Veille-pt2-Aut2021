import QtQuick 2.0
import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
import Tester 1.0

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
                text: "Bienvenue utilisateur"
                font.bold: true
                font.pixelSize: 20
                //anchors.horizontalCenter: parent.horizontalCenter
            }
            Layout.fillWidth: true
        }

        Rectangle {
            id: createBillRect
            Label {
                id: createBillLabel
                text: "Commencer une nouvelle facture"
                anchors.bottom: createBillButton.top
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.margins: 10
            }

            Button {
                id: createBillButton
                text: "Clickme"
                anchors.horizontalCenter: parent.horizontalCenter
            }
            Layout.fillWidth: true
        }

        Rectangle {
            id: correctBillRect
            Label {
                id: correctBillLabel
                text: "Corriger une facture"
                anchors.bottom: correctBillButton.top
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.margins: 10
            }

            Button {
                id: correctBillButton
                text: "Clickme"
                anchors.horizontalCenter: parent.horizontalCenter

            }
            Layout.fillWidth: true
        }

        Rectangle {
            id: changePassRect
            Label {
                id: changePassLabel
                text: "Changer votre mot de passe"
                anchors.bottom: changePassButton.top
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.margins: 10
            }

            Button {
                id: changePassButton
                text: "Clickme"
                anchors.horizontalCenter: parent.horizontalCenter
            }
            Layout.fillWidth: true
        }

        Rectangle {
            id: changePriceRect
            Label {
                id: changePriceLabel
                text: "Changer le prix d'un plat"
                anchors.bottom: changePriceButton.top
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.margins: 10
            }

            Button {
                id: changePriceButton
                text: "Clickme"
                anchors.horizontalCenter: parent.horizontalCenter
            }
            Layout.fillWidth: true
        }

        Rectangle {

            Button {
                id: quitButton
                text: "Deconnexion"
                onClicked: pageLoader.source = "login.qml"
                anchors.margins: 15
                anchors.horizontalCenter: parent.horizontalCenter
                background: Rectangle {
                    color: "red"
                    radius: 20
                }

            }
            Layout.fillWidth: true
        }
    }
}

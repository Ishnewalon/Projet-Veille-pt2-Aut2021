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

        Rectangle {
            id: oldPassRect
            Label {
                id: oldPassLabel
                text: "Ancien mot de passe"
                anchors.bottom: oldPassInput.top
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.margins: 10
            }

            TextField {
                id: oldPassInput
                placeholderText: qsTr("Entrez votre ancien mot de passe")
                echoMode: TextInput.Password
                anchors.horizontalCenter: parent.horizontalCenter
                width: 300
            }
            Layout.fillWidth: true
        }

        Rectangle {
            id: newPassRect
            Label {
                id: newPassLabel
                text: "Nouveau mot de passe"
                anchors.bottom: newPassInput.top
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.margins: 10
            }

            TextField {
                id: newPassInput
                placeholderText: qsTr("Entrez votre nouveau mot de passe")
                echoMode: TextInput.Password
                anchors.horizontalCenter: parent.horizontalCenter
                width: 300
            }
            Layout.fillWidth: true
        }

        Rectangle {
            Rectangle {
                Button {
                    id: confirmButton
                    text: "Confirmer"
                    onClicked: {
                        backend.changePassword(empIdInput.text, oldPassInput.text, newPassInput.text)
                        pageLoader.source = "internalMenu.qml"
                    }
                    background: Rectangle {
                        color: "green"
                        radius: 20
                    }
                }

                Button {
                    id: backButton
                    text: "Retour"
                    onClicked: pageLoader.source = "internalMenu.qml"
                    anchors.right: confirmButton.left
                    anchors.margins: 15
                    background: Rectangle {
                        color: "red"
                        radius: 20
                    }
                }
                anchors.horizontalCenter: parent.horizontalCenter
            }
            Layout.fillWidth: true
        }
    }
}

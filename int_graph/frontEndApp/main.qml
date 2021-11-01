import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
import Tester 1.0
Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Resto App")

    Login {
        id: myLogin
    }

    ColumnLayout {

        anchors.fill: parent
        anchors.margins: 10
        spacing: 10

        Rectangle {
            id: titleRect
            Text {
                text: "Bienvenue Chez Barbies Resto Bar Grill"
                font.bold: true
                font.pixelSize: 20
                anchors.horizontalCenter: parent.horizontalCenter
            }
            Layout.fillWidth: true
        }

        Rectangle {
            id: userRect
            Label {
                id: usernameLabel
                text: "Utilisateur"
                anchors.bottom: userInput.top
                anchors.horizontalCenter: parent.horizontalCenter
            }

            TextField {
                id: userInput
                placeholderText: qsTr("Entrez votre nom d'utilisateur")
                anchors.horizontalCenter: parent.horizontalCenter
                width: 300
            }
            Layout.fillWidth: true
        }

        Rectangle {
            id: passRect
            Label {
                id: passwordLabel
                text: "Mot de Passe"
                anchors.bottom: passwordInput.top
                anchors.horizontalCenter: parent.horizontalCenter
            }

            TextField {
                id: passwordInput
                placeholderText: qsTr("Entrez votre mot de passe")
                echoMode: TextInput.Password
                anchors.horizontalCenter: parent.horizontalCenter
                width: 300
            }
            Layout.fillWidth: true
        }

        Rectangle {
            Rectangle {
                Button {
                    id: loginButton
                    text: "Connexion"
                    onClicked: myLogin.callMe()
                    background: Rectangle {
                        color: "green"
                        radius: 20
                    }
                }

                Button {
                    id: quitButton
                    text: "Quitter"
                    onClicked: myLogin.callMe()
                    anchors.right: loginButton.left
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

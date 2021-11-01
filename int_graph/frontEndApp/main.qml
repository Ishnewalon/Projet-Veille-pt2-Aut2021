import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
import Tester 1.0
Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Login {
        id: myLogin
    }

    ColumnLayout {

        anchors.fill: parent
        anchors.margins: 10
        spacing: 1

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
            }
            Layout.fillWidth: true
        }

    }

/*
    Rectangle {
        id: userRect
        Label {
            id: usernameLabel
            text: "Utilisateur"
            anchors.bottom: userInput.top
        }

        TextField {
            id: userInput
            placeholderText: qsTr("Entrez votre nom d'utilisateur")
        }
    }
    Rectangle {
        id: passRect
        Label {
            id: passwordLabel
            text: "Mot de Passe"
            anchors.bottom: passwordInput.top
        }

        TextField {
            id: passwordInput
            placeholderText: qsTr("Entrez votre mot de passe")
            echoMode: TextInput.Password
            anchors.centerIn: parent
        }
    }

    Button {
        id: myButton
        //anchors.centerIn: parent
        text: "Click me"
        onClicked: myLogin.callMe()
    }
    //anchors.centerIn: parent
    }*/
}

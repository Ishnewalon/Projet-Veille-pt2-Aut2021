import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.12
import Tester 1.0
Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Login {
        id: myLogin
    }

    Label {
        id: usernameLabel
        text: "Utilisateur"
        anchors.bottom: passwordLabel.top
    }

    TextField {
        id: userInput
        placeholderText: qsTr("Entrez votre nom d'utilisateur")
      //  horizontalAlignment: horizontalCenter
        //anchors.leftMargin: 15
    }

    Label {
        id: passwordLabel
        text: "Mot de Passe"
        anchors.bottom: myButton.top
    }

    TextField {
        id: passwordInput
        placeholderText: qsTr("Entrez votre mot de passe")
        echoMode: TextInput.Password
       // horizontalAlignment: horizontalCenter
        //anchors.leftMargin: 15
    }



    Button {
        id: myButton
        anchors.centerIn: parent
        text: "Click me"
        onClicked: myLogin.callMe()
    }

}

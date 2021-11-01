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
        text: "Username"
        anchors.bottom: myButton.top
        anchors.rightMargin: 30

    }

    Button {
        id: myButton
        anchors.centerIn: parent
        text: "Click me"
        onClicked: myLogin.callMe()
    }

}

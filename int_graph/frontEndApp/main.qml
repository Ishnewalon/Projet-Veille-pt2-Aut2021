import QtQuick 2.2
import QtQuick.Window 2.15
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
//import QtQuick.Dialogs 1.0

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Resto App")

    Loader {
        id: pageLoader
        source: "login.qml"
    }

    Popup {
        id: errorMessage
        x: 150
        y: 150
        width: 400
        height: 50
        background: Rectangle {
            id:errorMessageBackground
            color: "red"
        }
        contentItem: Text {
            id: errorText

        }
    }

}

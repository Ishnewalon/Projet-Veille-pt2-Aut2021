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



    Loader {
        id: pageLoader
        source: "login.qml"
    }


}

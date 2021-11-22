import QtQuick 2.15
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12

Item {
    width: 650
    height: 400

    ListView {
        id: listView
        Layout.alignment: Qt.AlignCenter
        height: 200
        model: _myModel
        delegate: Rectangle {
            height: childrenRect.height
            width: 500
            Text {
                id: itemDesc
                text: {
                    if (model.name === "Crepe choco-fruits" ||
                        model.name === "Macaroni au fromage" ||
                        model.name === "Wrap au poulet" ||
                        model.name === "Saumon fume" ||
                        model.name === "Hot dog Combo" ||
                        model.name === "Saumon fume Combo" ||
                        model.name === "Croquette de poulet" ||
                        model.name === "Spaghetti Bolognaise" ||
                        model.name === "Grilled cheese" ||
                        model.name === "Gateau au chocolat" ||
                        model.name === "Creme glacee") {
                        model.name + "\t" + model.price
                    }
                    else {
                        model.name + "\t\t" + model.price
                    }
                }
            }
        }
    }

    Rectangle {
        Rectangle {
            /*Button {
                id: confirmButton
                text: "Confirmer"
                onClicked: {
                    if (backend.updatePassword(empIdInput.text, oldPassInput.text, newPassInput.text)) {
                        errorText.text = "Changement de mot de passe fait avec succes"
                        errorMessageBackground.color = "green"
                        errorMessage.open()
                        pageLoader.source = "internalMenu.qml"
                    }
                    else {
                        errorText.text = "Changement de mot de passe incomplet"
                        errorMessageBackground.color = "red"
                        errorMessage.open()
                    }
                }
                background: Rectangle {
                    color: "green"
                    radius: 20
                }
            }
*/
            Button {
                id: backButton
                text: "Retour"
                onClicked: pageLoader.source = "billingMenu.qml"
               // anchors.right: confirmButton.left
                anchors.margins: 15
                background: Rectangle {
                    color: "red"
                    radius: 20
                }
            }
            anchors.horizontalCenter: parent.horizontalCenter
        }
        anchors.top:listView.bottom
    }
}

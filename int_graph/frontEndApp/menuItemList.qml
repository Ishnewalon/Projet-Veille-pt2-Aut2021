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
            width: parent.width
            Text {
                id: itemDesc
                text: {
                    if (model.name === "Crepe choco-fruits") {
                        model.name + "\t" + model.price
                    }
                    else {
                        model.name + "\t\t" + model.price
                    }
                }
            }
            Button {
                id: addToBill
                anchors {
                    left: itemDesc.right;
                    margins: 30
                }
                text: "Ajouter a la facture"
                onClicked: backend.addToBill(model.name, model.price, model.menuName)
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

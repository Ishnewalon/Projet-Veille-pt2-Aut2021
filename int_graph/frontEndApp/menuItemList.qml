import QtQuick 2.0

Item {
    width: 650
    height: 400

    ListView {
        width: 600
        height: 350
        model: _myModel
        delegate: Rectangle {
            height: childrenRect.height
            width: parent.width

            Text {
                text: {
                    if (model.name === "Crepe choco-fruits") {
                        model.name + "\t" + model.price
                    }
                    else {
                        model.name + "\t\t" + model.price
                    }
                }
            }
        }
    }
}

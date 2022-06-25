import QtQuick 2.0

ListView {
    height: w1.height
    width: w1.width/7
    spacing: 2
    model:10
    delegate:MyListDelegate{}
}

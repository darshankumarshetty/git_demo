import QtQuick 2.0

GridView {
    id:gv
    height: w1.height
    width: w1.width/3
    cellHeight: w1.height/6
    cellWidth: w1.width/8
    model: 20
    delegate: MyGridDelegate{
    }
}

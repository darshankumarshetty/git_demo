import QtQuick 2.0

Item {
    MyGrid{
        id:grid
    }
    MyListView{
    id:list
    anchors.left: grid.right
    anchors.leftMargin: w1.width/2
    }
}

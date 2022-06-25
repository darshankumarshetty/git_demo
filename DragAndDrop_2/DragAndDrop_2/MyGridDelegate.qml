import QtQuick 2.0

Rectangle {
    id:rect
    height:  w1.height/8.5
    width: w1.width/9
    color: "pink"
    Text {
        text: index
        anchors.fill: parent
    }
    DropArea{
        id:droparea
        anchors.fill: parent
        onDropped:{
            if(index%2==0)
            {
                rect.width=w1.width/9
            }
            else
            {
                rect.width=w1.width/4.5
                rect.x=0
            }
        }
    }
}

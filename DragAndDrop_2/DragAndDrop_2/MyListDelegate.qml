import QtQuick 2.0
Item {
    id: item
    height: w1.height/8.5
    width:w1.width/10
    MouseArea {
        id: mouseArea
        height: parent.height
        width:parent.width
        drag.target: rect
        onReleased: {
            parent = rect.Drag.target !== null ? rect.Drag.target : item
            rect.Drag.drop()
        }

        Rectangle {
            id:rect
            height: parent.height
            width: parent.width
            color: "cyan"

            Text {
                anchors.fill: parent
                text: index
            }
            Drag.active: mouseArea.drag.active
            Drag.hotSpot.x:10
            Drag.hotSpot.y:10
            states: [
                State {
                   when: mouseArea.drag.active
                   ParentChange{target:rect;parent:item}
                 }
            ]
        }
    }
}

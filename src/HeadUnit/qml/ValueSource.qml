import QtQuick 2.2
import DataModule 1.0

Item {
    id: valueSource

    HeadUnitQtClass {
        id: manager
    }

    // Properties to manage gear and direction
    property int gear: 0
    property int direction: 0

    // Properties for controlling blinking and direction indicators
    property bool blink: false
    property bool left_direction: false
    property bool right_direction: false
    property bool left_on_off: false
    property bool right_on_off: false

    // Function to control the blinking behavior
    function blinking() {
        if (valueSource.left_direction) {
            valueSource.left_on_off = !valueSource.left_on_off
        }
        if (valueSource.right_direction) {
            valueSource.right_on_off = !valueSource.right_on_off
        }
    }

    // Timer to trigger the blinking function
    Timer {
        interval: 500; running: valueSource.blink; repeat: true
        onTriggered: valueSource.blinking()
    }

    // RGB color properties to manage the instrument cluster's light
    property string red: "80"
    property string green: "80"
    property string blue: "80"
    property string light: "#" + valueSource.red + valueSource.green + valueSource.blue

    // Property to manage the clock display
    property int mode: 0
    property var currentTime: 0
    property int hours: 0
    property int minutes: 0
    property string formattedHours: ""
    property string formattedMinutes: ""
    property string clock: "00:00"

    // Timer to update the clock every second
    Timer {
        interval: 1000; running: true; repeat: true
        onTriggered: {
            valueSource.currentTime = new Date();
            valueSource.hours = valueSource.currentTime.getHours();
            valueSource.minutes = valueSource.currentTime.getMinutes();
            valueSource.formattedHours = (valueSource.hours < 10 ? "0" : "") + valueSource.hours;
            valueSource.formattedMinutes = (valueSource.minutes < 10 ? "0" : "") + valueSource.minutes;
            valueSource.clock = valueSource.formattedHours + ":" + valueSource.formattedMinutes;
        }
    }

    // Property to manage steering and direction control
    property int steering: carinfo.steering
    property bool freeDirection: false

    // Handle changes in steering and direction
    onSteeringChanged: {
        if ((valueSource.direction === 1) && (valueSource.freeDirection === false) && (valueSource.steering === 1)) {
            valueSource.freeDirection = true
        } else if ((valueSource.direction === 2) && (valueSource.freeDirection === false) && (valueSource.steering === 2)) {
            valueSource.freeDirection = true
        } else if ((valueSource.direction === 1) && (valueSource.freeDirection === true) && (valueSource.steering !== 1)) {
            manager.setDirection(0)
            valueSource.direction = 0

            valueSource.blink = false
            valueSource.left_direction = false
            valueSource.right_direction = false
            valueSource.left_on_off = false
            valueSource.right_on_off = false

            valueSource.freeDirection = false
        } else if ((valueSource.direction === 2) && (valueSource.freeDirection === true) && (valueSource.steering !== 2)) {
            manager.setDirection(0)
            valueSource.direction = 0

            valueSource.blink = false
            valueSource.left_direction = false
            valueSource.right_direction = false
            valueSource.left_on_off = false
            valueSource.right_on_off = false

            valueSource.freeDirection = false
        }
    }
}
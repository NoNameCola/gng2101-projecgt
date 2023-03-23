#include <Arduino.h>
#include "Keyboard.h"
#include "Mouse.h"
#include "Joystick.h"

// set pins for mouse buttons
const int leftClick = 2;
const int rightClick = 3;
const int middleClick = 4;

// set pins for mouse toggle
const int leftClickToggle = 5;
const int rightClickToggle = 6;
const int middleClickToggle = 7;

// set pins for joystick
const int joyXAxis = A0;
const int joyYAxis = A1;

void setup() {
    // mouse buttons
    pinMode(rightClick, INPUT_PULLUP);
    pinMode(leftClick, INPUT_PULLUP);
    pinMode(middleClick, INPUT_PULLUP);
    // mouse toggles
    pinMode(rightClickToggle, INPUT_PULLUP);
    pinMode(leftClickToggle, INPUT_PULLUP);
    pinMode(middleClickToggle, INPUT_PULLUP);
    // joystick
    pinMode(joyXAxis,INPUT);
    pinMode(joyYAxis, INPUT);
}

void loop() {
// write your code here
}
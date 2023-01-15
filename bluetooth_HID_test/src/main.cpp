/**
 * This example turns the ESP32 into a Bluetooth LE mouse that continuously moves the mouse.
 */
#include <Arduino.h>
#include <BleMouse.h>

BleMouse bleMouse;

void setup() {
  Serial.begin(115200);
  Serial.println("Start...");
  bleMouse.begin();
}

void loop() {
  if(bleMouse.isConnected()) {

      bleMouse.move(0,0,1);//Scroll up

      bleMouse.move(0,0,-1);//Scroll down

      bleMouse.move(0,0,0,-1);//Scroll left

      bleMouse.move(0,0,0,1);//Scroll right

      bleMouse.move(0,-1);//move down relative

      bleMouse.move(0,1);//move down relative

      bleMouse.move(-1,0);//move left relative

      bleMouse.move(1,0);//move right relative

      bleMouse.click(MOUSE_LEFT);//unconfirmed

      bleMouse.click(MOUSE_RIGHT);//unconfirmed


  }
}
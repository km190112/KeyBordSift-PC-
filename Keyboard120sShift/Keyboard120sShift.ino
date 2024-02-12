/*
  http://www.arduino.cc/en/Tutorial/KeyboardSerial
  https://www.arduino.cc/reference/en/language/functions/usb/keyboard/keyboardmodifiers/
*/

#include "Keyboard.h"

void setup() {
  Serial.begin(9600);
  Keyboard.begin();

  delay(5 * 1000);
  Serial.println("120s HID KEY_LEFT_SHIFT");
}

void loop() {
  Keyboard.write(KEY_LEFT_SHIFT);  // KEY_LEFT_SHIFT = 0x81
  //Keyboard.write(0xF3);  //F18キー：半角 = 0x81
  Serial.println("KEY_LEFT_SHIFT");

  delay(120 * 1000);
}
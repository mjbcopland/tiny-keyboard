#include <Button.h> // https://github.com/mjbcopland/Button
#include <DigiKeyboard.h>

Button button(0, INTERNAL_PULLUP, 25);

void setup() {
  
}

void loop() {
  button.update();
  DigiKeyboard.update();

  if (button.wasPressed()) {
    DigiKeyboard.sendKeyPress(0x32); // Keyboard Non-US # and ~
  }
  else if (button.wasReleased()) {
    DigiKeyboard.sendKeyPress(NULL);
  }
}


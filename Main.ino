#include "DigiKeyboard.h"
void setup() {
  DigiKeyboard.delay(300);  
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI);  
  DigiKeyboard.delay(50);
  DigiKeyboard.print("cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100); 
  DigiKeyboard.print("whoami");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}
void loop() {}

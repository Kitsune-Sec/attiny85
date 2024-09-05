#include "DigiKeyboard.h"
void setup() {
  // empty
}

void loop() 
{
  // Initialise digispark
  DigiKeyboard.sendKeyStroke(0);

  // Hits windows+r
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(600);

  // Enters the rickroll link and presses enter
  DigiKeyboard.print("https://www.youtube.com/watch?v=dQw4w9WgXcQ");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  //
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_F); 

  for (;;) {/* Stops the loop */}
}

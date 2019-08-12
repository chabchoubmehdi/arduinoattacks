#include <Keyboard.h> 
/*
* Thankyou For Using Me. 
* Follow my Developer @root_haxor 
*/
void setup() {
  Keyboard.begin();
delay(3000);
    
type(KEY_LEFT_GUI,false);
type('R',false);
Keyboard.releaseAll();
delay(500);

print(F("NOTEPAD"));
delay(500);
    
type(KEY_RETURN,false);
Keyboard.releaseAll();
delay(750);

print(F("HELLO WORLD!"));
    
type(KEY_RETURN,false);
Keyboard.releaseAll();
Keyboard.end();
}
void type(int key, boolean release) {
  Keyboard.press(key);
  if(release)
    Keyboard.release(key);
}
void print(const __FlashStringHelper *value) {
  Keyboard.print(value);
}
void loop(){}

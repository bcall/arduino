void setup() {

  // Get into Recovery Partition
  delay (3000);
  
  Keyboard.set_modifier(MODIFIERKEY_GUI);
  Keyboard.send_now();
  Keyboard.set_key1(KEY_R);
  Keyboard.send_now();
  
  delay(5000);

  Keyboard.set_modifier(0);
  Keyboard.set_key1(0);
  Keyboard.send_now();

  //Wait for Boot
  delay(40000);

  //Select English as the main language
  Keyboard.set_key1(KEY_ENTER);
  Keyboard.send_now();
  Keyboard.set_key1(0);
  Keyboard.send_now();

  delay(2000);

  //Move the cursor to the upper left corner
  int i;
  for (i=0; i<80; i++) {
    Mouse.move(-127, -127);
    delay(5);
  }

  delay (200);

  Mouse.click();

  delay (50);

  Keyboard.set_key1(KEY_TAB);
  Keyboard.send_now();
  Keyboard.set_key1(0);
  Keyboard.send_now();

  delay (50);

  Keyboard.set_key1(KEY_TAB);
  Keyboard.send_now();
  Keyboard.set_key1(0);
  Keyboard.send_now();

  delay (50);

  Keyboard.set_key1(KEY_TAB);
  Keyboard.send_now();
  Keyboard.set_key1(0);
  Keyboard.send_now();

  delay (50);

  Keyboard.set_key1(KEY_TAB);
  Keyboard.send_now();
  Keyboard.set_key1(0);
  Keyboard.send_now();

  delay (50);

  Keyboard.set_key1(KEY_T);
  Keyboard.send_now();
  Keyboard.set_key1(0);
  Keyboard.send_now();

  delay (50);

  Keyboard.set_key1(KEY_ENTER);
  Keyboard.send_now();
  Keyboard.set_key1(0);
  Keyboard.send_now();

  delay (5000);

  Keyboard.print("/Volumes/Macintosh\\ HD/usr/bin/curl https://github.com/callbrian/osx_provision/recovery_bootstrap.sh > /Volumes/Macintosh\\ HD/var/tmp/it-dept/");
  
  return;
}

void loop() { } // no loop


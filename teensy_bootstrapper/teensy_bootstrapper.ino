void setup() {

  // Get into Recovery Partition
  delay (3000);
  
  Keyboard.set_modifier(MODIFIERKEY_GUI);
  Keyboard.send_now();
  Keyboard.set_key1(KEY_R);
  Keyboard.send_now();
  delay(5000);

  // Release keys and wait for machine to boot
  Keyboard.set_modifier(0);
  Keyboard.set_key1(0);
  Keyboard.send_now();
  delay(70000);

  // Select English as the main language
  Keyboard.set_key1(KEY_ENTER);
  Keyboard.send_now();
  Keyboard.set_key1(0);
  Keyboard.send_now();
  delay(2000);

  // Move the cursor to the upper left corner
  int i;
  for (i=0; i<80; i++) {
    Mouse.move(-127, -127);
    delay(5);
  }
  delay (250);

  Mouse.click();
  delay (250);

  Keyboard.set_key1(KEY_TAB);
  Keyboard.send_now();
  Keyboard.set_key1(0);
  Keyboard.send_now();
  delay (100);

  Keyboard.set_key1(KEY_TAB);
  Keyboard.send_now();
  Keyboard.set_key1(0);
  Keyboard.send_now();
  delay (100);

  Keyboard.set_key1(KEY_TAB);
  Keyboard.send_now();
  Keyboard.set_key1(0);
  Keyboard.send_now();
  delay (100);

  Keyboard.set_key1(KEY_TAB);
  Keyboard.send_now();
  Keyboard.set_key1(0);
  Keyboard.send_now();
  delay (100);

  Keyboard.set_key1(KEY_T);
  Keyboard.send_now();
  Keyboard.set_key1(0);
  Keyboard.send_now();
  delay (100);

  Keyboard.set_key1(KEY_ENTER);
  Keyboard.send_now();
  Keyboard.set_key1(0);
  Keyboard.send_now();
  delay (5000);

  Keyboard.print(F("mkdir /Volumes/Macintosh\\ HD/var/tmp/it-dept/"));
  delay (100);

   // Hit return
  Keyboard.set_key1(KEY_ENTER);
  Keyboard.send_now();
  Keyboard.set_key1(0);
  Keyboard.send_now();
  delay (100);

  Keyboard.print(F("/Volumes/Macintosh\\ HD/usr/bin/curl -L https://raw.githubusercontent.com/callbrian/osx_provision/master/recovery_bootstrap.sh > /Volumes/Macintosh\\ HD/var/tmp/it-dept/recovery_bootstrap.sh"));
  delay (100);
  
  Keyboard.set_key1(KEY_ENTER);
  Keyboard.send_now();
  Keyboard.set_key1(0);
  Keyboard.send_now();
  delay (100);

  Keyboard.print(F("bash /Volumes/Macintosh\\ HD/var/tmp/it-dept/recovery_bootstrap.sh"));
  delay (100);
  
  Keyboard.set_key1(KEY_ENTER);
  Keyboard.send_now();
  Keyboard.set_key1(0);
  Keyboard.send_now();
  
  return;
}

void loop() { } // no loop


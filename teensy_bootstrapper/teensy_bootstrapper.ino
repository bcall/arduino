void setup() {

  // Get into Recovery Partition
  delay (2000);

  int i;
  for (i=0; i<50; i++) {
  Keyboard.set_modifier(MODIFIERKEY_GUI);
  Keyboard.send_now();
  Keyboard.set_key1(KEY_R);
  Keyboard.send_now();
  delay(100);

  // Release keys and wait for machine to boot
  Keyboard.set_modifier(0);
  Keyboard.set_key1(0);
  Keyboard.send_now();
  delay(100);
  }
  
  delay(50000);

  // Select English as the main language
  Keyboard.set_key1(KEY_ENTER);
  Keyboard.send_now();
  Keyboard.set_key1(0);
  Keyboard.send_now();
  delay(2000);

  // Move the cursor to the upper left corner
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
  delay (10000);

  Keyboard.set_key1(KEY_ENTER);
  Keyboard.send_now();
  Keyboard.set_key1(0);
  Keyboard.send_now();
  delay (10000);

  Keyboard.print("mkdir -p /Volumes/Macintosh\\ HD/var/tmp/it-dept && cd $_");
  delay (10000);

  // Hit return
  Keyboard.set_key1(KEY_ENTER);
  Keyboard.send_now();
  Keyboard.set_key1(0);
  Keyboard.send_now();
  delay (10000);

//  Keyboard.print("cd /Volumes/Macintosh\\ HD/var/tmp/it-dept");
//  delay (10000);
//
//  // Hit return
//  Keyboard.set_key1(KEY_ENTER);
//  Keyboard.send_now();
//  Keyboard.set_key1(0);
//  Keyboard.send_now();
//  delay (200);

  Keyboard.print("/Volumes/Macintosh\\ HD/usr/bin/curl -L https://raw.githubusercontent.com/callbrian/osx_provision/master/recovery_bootstrap.sh | bash");
  delay (100);
  
  Keyboard.set_key1(KEY_ENTER);
  Keyboard.send_now();
  Keyboard.set_key1(0);
  Keyboard.send_now();
  delay (100);

//  Keyboard.print("bash /Volumes/Macintosh\\ HD/var/tmp/it-dept/recovery_bootstrap.sh");
//  delay (100);
//  
//  Keyboard.set_key1(KEY_ENTER);
//  Keyboard.send_now();
//  Keyboard.set_key1(0);
//  Keyboard.send_now();
//  
  return;
}

void loop() { } // no loop


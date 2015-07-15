void setup() {
  delay (3000);
  
  Keyboard.set_modifier(MODIFIERKEY_GUI);
  Keyboard.send_now();
  Keyboard.set_key1(KEY_R);
  Keyboard.send_now();
  
  delay(5000);

  Keyboard.set_modifier(0);
  Keyboard.set_key1(0);
  Keyboard.send_now();
  
  delay(30000);
  
  int i;
  for (i=0; i<80; i++) {
    Mouse.move(-127, -127);
    delay(5);
  }

  delay (50);

  Mouse.click();

  delay (50);

  Keyboard.set_key1(KEY_U);
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

  delay (2000);

  Keyboard.print("Bash whatever you want to bash...");
  
  return;
}

void loop() { } // no loop


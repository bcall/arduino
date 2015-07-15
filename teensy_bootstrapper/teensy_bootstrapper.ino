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
  
  Keyboard.set_key1(KEY_ENTER);
  Keyboard.send_now();
  
  delay(200);
  
  Keyboard.set_key1(0);
  Keyboard.send_now();

  return;
}

void loop() { } // no loop


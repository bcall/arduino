#include "mac.h"

void setup() {
  delay(1000);
  
  Serial.println("Reading MAC from hardware...");
  read_mac();
  
  Keyboard.print("MAC: ");
  print_mac();
  Keyboard.println();
  
  Keyboard.print("Finished.");
}

void loop() {
}


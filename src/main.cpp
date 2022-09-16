#include <Arduino.h>

void setup() {

  // start the USB serial monitor port 
  Serial.begin(115200);
  // print some text to the USB port 
  Serial.println("\n\nPushpendra Chauhan, 000820479");
  
  Serial.printf("ESP8266 Chip ID  %08X",ESP.getChipId());
  Serial.printf("\nFlash Chip ID  %08X", ESP.getFlashChipId());

}
 
void loop() {

  Serial.print("Time: ");

  Serial.println(millis()); // prints time since program started
  delay(2000); // wait for 2 seconds

}

/*
  Daniel Carrasco
  This and more tutorials at https://www.electrosoftcloud.com/
*/

// Simple code to retreive the WiFi MAC address
#include "WiFi.h"

void setup(){
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  Serial.println(WiFi.macAddress());
}

void loop(){
}

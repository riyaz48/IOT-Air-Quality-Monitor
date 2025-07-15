#include <MQ135.h>
#include <ESP8266WiFi.h>
#include "ThingSpeak.h"

#define MQ135_PIN A0
MQ135 gasSensor = MQ135(MQ135_PIN);

const char* ssid = "riyaz";
const char* password = "1234";

WiFiClient client;
unsigned long myChannelNumber = YOUR_CHANNEL_NUMBER;
const char* myWriteAPIKey = "YOUR_API_KEY";

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000); Serial.print(".");
  }
  Serial.println("Connected!");
  ThingSpeak.begin(client);
}

void loop() {
  float air_quality = gasSensor.getPPM();

  Serial.print("Air Quality (CO2 ppm): ");
  Serial.println(air_quality);

  ThingSpeak.setField(1, air_quality);
  ThingSpeak.writeFields(myChannelNumber, myWriteAPIKey);

  delay(15000);  // Upload every 15 seconds
}

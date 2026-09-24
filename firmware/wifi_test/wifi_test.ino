#include <WiFi.h>
#include "local_config.h"

#ifndef WIFI_SSID
#error "Create local_config.h with WIFI_SSID and WIFI_PASSWORD"
#endif

#ifndef WIFI_PASSWORD
#error "Create local_config.h with WIFI_SSID and WIFI_PASSWORD"
#endif

static const int LED_PIN = 2;

void setup() {
  Serial.begin(115200);
  delay(500);

  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);

  Serial.println();
  Serial.println("================================");
  Serial.println(" ESP32 XiaoZhi Project");
  Serial.println(" Wi-Fi test");
  Serial.println("================================");

  WiFi.mode(WIFI_STA);
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);

  Serial.print("Connecting to Wi-Fi");

  int tries = 0;
  while (WiFi.status() != WL_CONNECTED && tries < 40) {
    delay(500);
    Serial.print(".");
    digitalWrite(LED_PIN, !digitalRead(LED_PIN));
    tries++;
  }

  Serial.println();

  if (WiFi.status() == WL_CONNECTED) {
    digitalWrite(LED_PIN, HIGH);
    Serial.println("Wi-Fi connected!");
    Serial.print("IP address: ");
    Serial.println(WiFi.localIP());
  } else {
    digitalWrite(LED_PIN, LOW);
    Serial.println("Wi-Fi connection failed.");
  }
}

void loop() {
  if (WiFi.status() == WL_CONNECTED) {
    digitalWrite(LED_PIN, HIGH);
  } else {
    digitalWrite(LED_PIN, (millis() / 250) % 2);
  }
  delay(100);
}

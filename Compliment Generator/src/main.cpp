#include <Arduino.h>

  // put your setup code here, to run once:
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  Serial.println("Hello World");
}

  // put your main code here, to run repeatedly:
void loop() {
  delay(500);
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("Hello World from the loop");
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
}
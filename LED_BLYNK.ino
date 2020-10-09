#include <BlynkSimpleStream.h>

// Pin Assignment
int red_pin = 8, green_pin = 9, blue_pin = 10;

// Your app authentication token (can be reached from your blynk app)
char auth[] = "fshnpGOZnO6t69_9Dhw-EtECNs4JLtfa";

void setup() {
  // sset up three LED pin as output
  pinMode(red_pin, OUTPUT);
  pinMode(green_pin, OUTPUT);
  pinMode(blue_pin, OUTPUT);

  // Blynk will work through serial
  Serial.begin(9600);
  Blynk.begin(auth, Serial);
}

void loop() {
  // run blynk
  Blynk.run();
}

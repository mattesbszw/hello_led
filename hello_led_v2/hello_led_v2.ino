#define PIN_LED 13
#define PIN_TASTER 15


void setup() {
  
  pinMode(PIN_LED, OUTPUT);
  pinMode(PIN_TASTER, INPUT_PULLUP);
}

void loop() {

  int rState = digitalRead(PIN_TASTER);
  int myState = LOW;
  if (rState == LOW) {
   myState = HIGH;
  }
  digitalWrite(PIN_LED, myState);
  
}

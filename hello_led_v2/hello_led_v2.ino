constexpr byte PIN_LED = 13;
constexpr byte PIN_TASTER = 15;

void setup() {
  
  pinMode(PIN_LED, OUTPUT);
  
  // aktiviert internen Widerstand; Neutralzustand => HIGH    
  pinMode(PIN_TASTER, INPUT_PULLUP);
}

void loop() {

  // Einlesen des Pin-Zustands in eine Variable tState
  // kein Kontakt: HIGH (s.o.), Kontakt: LOW
  int tState = digitalRead(PIN_TASTER);

  int ledState = LOW;
  if (tState == LOW) {
    ledState = HIGH;
  } 
  digitalWrite(PIN_LED, ledState);
  
}
// Die globale Variable enthält die Pin-Nummer, an der die LED angeschlossen wird.
// Globale Konstanten werden i.d.R. groß geschrieben.
constexpr byte PIN_LED = 13;

// Die SETUP-Funktion wird einmalig beim Start des Mikrocontrollers ausgeführt
void setup() {
    
    // definiert den Zweck eine PINs, Eingang (INPUT) oder Ausgang (OUTPUT)
    pinMode(PIN_LED, OUTPUT);
}

// Die LOOP-Funktion läuft als Endlosschleife auf dem Mikrocontroller
void loop() {
  
  // versetzt einen PIN in einen elektrischen Zustand, hier »Strom Ein«
  digitalWrite(PIN_LED, HIGH);
  // 1000 ms Verzögerung/Pause; 
  delay(1000);

  // »Strom Aus«
  digitalWrite(PIN_LED, LOW);
  // wieder Pause
  delay(1000);
}

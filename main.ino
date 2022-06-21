#define LED 13
#define BTN0 A0
#define BTN1 A1

void setup() {
 pinMode(LED,OUTPUT);
  pinMode(BTN0, INPUT);
  pinMode(BTN1, INPUT);
}

void loop() {
  if (digitalRead(BTN0) == HIGH || digitalRead(BTN1) == HIGH) 
    digitalWrite(LED, HIGH);
  else digitalWrite(LED, LOW);
}

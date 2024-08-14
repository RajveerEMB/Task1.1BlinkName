const int builtInLedPin = LED_BUILTIN;
const int buttonPin = 2; 

const int shortBlink = 300;
const int longBlink = 3 * shortBlink;
const int ElementDelay = shortBlink;
const int LetterDelay = 3 * shortBlink;

bool ledState = false; 

void setup() {
  Serial.begin(9600);
  pinMode(builtInLedPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP); 
  blinkR();
  blinkA();
  blinkJ();
  blinkV();
  blinkE();
  blinkE();
  blinkR();
  delay(1500);
}

void loop() {
  int buttonState = digitalRead(buttonPin);
  if (buttonState == LOW) 
  { 
    ledState = !ledState; 
    delay(50); 
  }

  if (ledState) {
   
  }
}

void blinkShort() {
  digitalWrite(builtInLedPin, HIGH);
  delay(shortBlink);
  digitalWrite(builtInLedPin, LOW);
  delay(ElementDelay);
}

void blinkLong() {
  digitalWrite(builtInLedPin, HIGH);
  delay(longBlink);
  digitalWrite(builtInLedPin, LOW);
  delay(ElementDelay);
}

void blinkR() {
  blinkShort();
  blinkLong();
  blinkShort();
  delay(LetterDelay);
}

void blinkA() {
  blinkShort();
  blinkLong();
  delay(LetterDelay);
}

void blinkJ() {
  blinkShort();
  blinkLong();
  blinkLong();
  blinkLong();
  delay(LetterDelay);
}

void blinkV() {
  blinkShort();
  blinkShort();
  blinkShort();
  blinkLong();
  delay(LetterDelay);
}

void blinkE() {
  blinkShort();
  delay(LetterDelay);
}
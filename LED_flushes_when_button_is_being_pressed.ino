const int LED = 13; // 13番ピンにLEDを接続中
const int BUTTON = 7;

int val = LOW;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT); // Buttonの状態を監視
}

void loop() {
  val = digitalRead(BUTTON);
  
  if (val == HIGH) {
      digitalWrite(LED, HIGH);
  } else {
      digitalWrite(LED, LOW);
  }
}




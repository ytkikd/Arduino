// Blinking LED

const int LED = 13; // LEDはデジタルピン 13に接続
const int BUTTON = 7; // プッシュボタンの接続ピン

int val = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(BUTTON);

  if(val == HIGH) {
      digitalWrite(LED, HIGH);
  } else {
       digitalWrite(LED, LOW);
  }
}

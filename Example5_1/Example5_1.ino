// Blinking LED
// LEDのフェードインとフェードアウト

const int LED = 9; // LEDはデジタルピン 9に接続
int i = 0;         // カウントアップ用の変数

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  for(i = 0; i < 255; i++) {
    analogWrite(LED, i);
    delay(20);
  }

  for(i = 255; i > 0; i--) {
    analogWrite(LED, i);
    delay(50);     
  }
}

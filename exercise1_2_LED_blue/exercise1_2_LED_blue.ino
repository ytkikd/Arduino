// Blinking LED
// LEDのフェードインとフェードアウト

const int LED9 =  9; // 青色LED接続
const int LED10 = 10; // 黄色LED接続
const int LED11 = 11; // 赤色LED接続

int i = 0;         // カウントアップ用の変数

void setup() {
  // put your setup code here, to run once:
  pinMode(LED9, OUTPUT);
  pinMode(LED10, OUTPUT);
  pinMode(LED11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(LED9, HIGH);
  delay(1000);

  digitalWrite(LED9, LOW);
  delay(1000);
}

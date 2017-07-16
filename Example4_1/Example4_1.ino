// Blinking LED


const int LED = 13; // LEDはデジタルピン 13に接続

// 初期化
void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTUT); // 出力設定
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalwrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  delay(1000;
}

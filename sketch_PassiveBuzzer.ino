int buzzerPin = 3;

void setup() {
  pinMode(buzzerPin, OUTPUT);

}

void loop() {


for(int i=0; i<250; i++){
  digitalWrite(buzzerPin, HIGH);
  delay(1);
  digitalWrite(buzzerPin, LOW);
  delay(1);

}
for(int i=0; i<125; i++){
  digitalWrite(buzzerPin, HIGH);
  delay(2);
  digitalWrite(buzzerPin, LOW);
  delay(2);

}
}

void setup() {
  // put your setup code here, to run once:
  pinMode(7, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(7) == HIGH) {
    Serial.println("Hello World!");
  }
  if (digitalRead(7) == LOW) {
    Serial.println("It's 2023");
  }


}

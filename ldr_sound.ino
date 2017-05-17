int IRpin = A0;
int distance = 0;
int msg = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
  distance = analogRead(IRpin);
  if (distance < 100) {
    distance = 100;
  } else if (distance > 900){
    distance = 900;
  }
  msg = map(distance, 100, 900, 0, 127);
  Serial.write(msg);
}

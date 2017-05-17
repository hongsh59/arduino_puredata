// Analog output controlled from Pure Data, variable to hold LED's pin number
int led = 9;
void setup()
{ pinMode(led, OUTPUT);
  Serial.begin(9600);
}
void loop()
{   while(Serial.available()){
    byte LEDpwm = Serial.read();
    analogWrite(led, LEDpwm);     // use the analogWrite function for PWM
  }
}

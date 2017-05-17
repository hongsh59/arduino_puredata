// set a variable to hold the button's pin number
int pushButton = 2;
void setup()
{  pinMode(pushButton, INPUT);
  Serial.begin(9600);
}
void loop()
{  // read and store the data from the push button
  byte buttonState = digitalRead(pushButton);
  // write the stored data to the serial port
  Serial.write(buttonState);
}

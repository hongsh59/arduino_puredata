// variable to hold the knob's pin number, analog pin A0
int knob = 0;
// declare the array to be transferred over serial
byte myArray[3];
void setup()
{  Serial.begin(9600);
}
void loop()
{  // set the first byte of the array to the hexadecimal value 192
  myArray[0] = 0xc0;
  int knobValue = analogRead(knob);
  myArray[1] = knobValue & 0x007f;
  myArray[2] = knobValue >> 7;
  Serial.write(myArray, 3);
}

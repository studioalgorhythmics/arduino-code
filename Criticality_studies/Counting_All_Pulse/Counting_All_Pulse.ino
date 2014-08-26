const int pinArray[] = {38, 39};     // 
int count = 0;
int timer = 100;         

void setup() {
  // set the digital pin as output:
  for (count=0;count<2;count++) {
    pinMode(pinArray[count], OUTPUT);
  }  
}

void loop()
{
for (count=0;count<2;count++) {
   digitalWrite(pinArray[count], HIGH);
   delay(timer);
   digitalWrite(pinArray[count], LOW);
   delay(timer);
  }
}


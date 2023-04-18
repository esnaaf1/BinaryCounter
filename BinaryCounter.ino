// LED coutner program
// This program is a digital counter displays numbers 0 through 31 using 5 LEDs as switches
// for example:
//        decimal 1 = 00001 in binary, lights the first LED 
//        decimal 2 = 00010 in binary, lihgts the second LED 
//        ...

int pin2 = 2;
int pin3= 3;
int pin4 = 4; 
int pin5 = 5;
int pin6 = 6;
int waitTime = 1000;


void generateNum(int b4, int b3, int b2, int b1, int b0);

void setup()
{
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
  pinMode(pin5, OUTPUT);
  pinMode(pin6, OUTPUT);
    
}

void loop()
{
   generateNum(0,0,0,0,0); // 0
   generateNum(0,0,0,0,1); // 1
   generateNum(0,0,0,1,0); // 2
   generateNum(0,0,0,1,1); // 3
   generateNum(0,0,1,0,0); // 4
   generateNum(0,0,1,0,1); // 5
   generateNum(0,0,1,1,0); // 6
   generateNum(0,0,1,1,1); // 7
   generateNum(0,1,0,0,0); // 8
   generateNum(0,1,0,0,1); // 9
   generateNum(0,1,0,1,0); // 10  
   generateNum(0,1,0,1,1); // 11
   generateNum(0,1,1,0,0); // 12
   generateNum(0,1,1,0,1); // 13 
   generateNum(0,1,1,1,0); // 14
   generateNum(0,1,1,1,1); // 15

   generateNum(1,0,0,0,0); // 16
   generateNum(1,0,0,0,1); // 17
   generateNum(1,0,0,1,0); // 18
   generateNum(1,0,0,1,1); // 19
   generateNum(1,0,1,0,0); // 20
   generateNum(1,0,1,0,1); // 21
   generateNum(1,0,1,1,0); // 22
   generateNum(1,0,1,1,1); // 23
   generateNum(1,1,0,0,0); // 24
   generateNum(1,1,0,0,1); // 25
   generateNum(1,1,0,1,0); // 26  
   generateNum(1,1,0,1,1); // 27
   generateNum(1,1,1,0,0); // 28
   generateNum(1,1,1,0,1); // 29 
   generateNum(1,1,1,1,0); // 30
   generateNum(1,1,1,1,1); // 31
}

void generateNum(int b4, int b3, int b2, int b1, int b0) {
  digitalWrite(pin2, b4);
  digitalWrite(pin3, b3);
  digitalWrite(pin4, b2);
  digitalWrite(pin5, b1);
  digitalWrite(pin6, b0);
  // delay for a 1 second
  delay(waitTime);
}

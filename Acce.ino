// initializing pins and variable(s)

const int Sensitivity = 7;
const int xpin = A1;                  
const int ypin = A2;                  
const int zpin = A3;
const int x=1;


void setup() {
  
Serial.begin(9600);  //serial communication frequency/ speed
pinMode(Sensitivity, OUTPUT);  // 0 for high Sens, 1 for Low Sens
           }

void loop() {
  //reading the pins
  digitalWrite(Sensitivity,LOW);  // 0 for high sens and 1 for low sens
 int Xpin= analogRead(xpin);
 int Ypin= analogRead(ypin);
 int Zpin= analogRead(zpin);

while (x<2)// this loop will run once and lable x,y,z at the top
{
Serial.print ("X");
Serial.print ("\tY");
Serial.print ("\tZ");
Serial.print ("\n");
x++;
}
// to avoid errors you might want to comment out the "\t" & "\n" when serial com to another program
Serial.print(Xpin);
Serial.print ("\t");
Serial.print(Ypin);
Serial.print ("\t");
Serial.print(Zpin);
Serial.print ("\n");
delay (100);

}

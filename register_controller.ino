const int r0 = 9;
const int r1 = 8;
const int r2 = 7;
const int r3 = 6;
const int r4 = 5;
const int r5 = 4;
const int r6 = 3;
const int r7 = 2;

const int latch = 10;


void setup() {
  pinMode(r0, OUTPUT);
  pinMode(r1, OUTPUT);
  pinMode(r2, OUTPUT);
  pinMode(r3, OUTPUT);
  pinMode(r4, OUTPUT);
  pinMode(r5, OUTPUT);
  pinMode(r6, OUTPUT);
  pinMode(r7, OUTPUT);
  
  pinMode(latch, OUTPUT);
}

// functions
void update() 
{
  digitalWrite(latch, HIGH);
  digitalWrite(latch, LOW);
}
   
void write_register(int a, int b, int c, int d, int e, int f, int g, int h)
 {
   digitalWrite(r0, a);
   digitalWrite(r1, b);
   digitalWrite(r2, c);
   digitalWrite(r3, d);
   digitalWrite(r4, e);
   digitalWrite(r5, f);
   digitalWrite(r6, g);
   digitalWrite(r7, h);
   
   update();
 }
 
void loop() {
 /*
 write_register(0,0,0,0,0,0,0,1);
 delay(500);
 write_register(0,0,0,0,0,0,1,0);
 delay(500);
 write_register(0,0,0,0,0,1,0,0);
 delay(500);
 write_register(0,0,0,0,1,0,0,0);
 delay(500);
 write_register(0,0,0,1,0,0,0,0);
 delay(500);
 write_register(0,0,1,0,0,0,0,0);
 delay(500);
 write_register(0,1,0,0,0,0,0,0);
 delay(500);
 write_register(1,0,0,0,0,0,0,0);
 delay(500);
 */
 
 write_register(0,1,0,1,0,0,1,1);
 delay(500);
 write_register(0,1,0,0,1,1,1,1);
 delay(500);
 write_register(0,1,0,1,0,0,1,1);
 delay(500);
 
 write_register(0,0,0,0,0,0,0,0);
 delay(2000);
}

/*
 * Building an Arduino DC Voltmeter
*/
 float vPow = 4.7;
 float r1 = 100000;
 float r2 = 10000;
 
 void setup() {
   Serial.begin(9600);
   
   // Send ANSI terminal codes
   Serial.print("\x1B");
   Serial.print("[2J");
   Serial.print("\x1B");
   Serial.println("[H");
   // End ANSI terminal codes
   
   Serial.println("--------------------");
   Serial.println("DC VOLTMETER");
   Serial.print("Maxi

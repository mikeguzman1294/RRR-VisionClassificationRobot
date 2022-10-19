/* Control of 3 servos
 *  
 */
#include <Servo.h> 
 
Servo servoB;  // Servo base  ref = 0
Servo servoM; // Servo medio ref = 0 
Servo servoA; //Servo Alto 180 ref = 0
 int posB= 0;    // Variable posicion servo base
 int posM= 0;  // Variable posicion servo medio
 int posA= 0; //Variable posicion servo Alto, palanca
char inByte = '0';
char flag1 = '1';
void setup() 
{ 
  Serial.begin(9600); // initializes serial port at 9600 baud-rate
  Serial1.begin(9600);
  servoB.attach(11);  // attaches the servo on pin 11 to the servo object  
  servoM.attach(6);  // attaches the servo on pin 6 to the servo object   
  servoA.attach(3);  // attaches the servo on pin 3 to the servo object 
  pinMode(13, OUTPUT); 
  servoB.write(80); 
  servoM.write(0); 
  servoA.write(180); 
} 
 
void loop() 
{ 
  Serial1.flush();
  Serial1.write(flag1);
  while (!Serial1.available()){
  }
  if (Serial1.available()) {
    int b1 = 0;
    int m1 = 0;
    int a1 = 0;
    inByte = Serial1.read();
    Serial1.flush();
    Serial.println(inByte);     // Se imprime el valor para prueba
    switch (inByte) {
      case '0':       
        break;
      case '1':
        b1 = 21;
        m1 = 95;
        a1 = 138;
        posServo(b1,m1,a1);
        break;
      case '2':
        b1 = 25;
        m1 = 78;
        a1 = 98;
        posServo(b1,m1,a1);
        break;
      case '3':
        b1 = 32;
        m1 = 71;
        a1 = 73;
        posServo(b1,m1,a1);
        break;
      case '4':
        b1 = 41;
        m1 = 68;
        a1 = 58;
        posServo(b1,m1,a1);
        break;
      case '5':
        b1 = 60;
        m1 = 72;
        a1 = 48;
        posServo(b1,m1,a1);
        break;
      case '6':
        b1 = 83;
        m1 = 79;
        a1 = 40;
        posServo(b1,m1,a1);
        break;
      case '7':
        b1 = 110;
        m1 = 77;
        a1 = 43;
        posServo(b1,m1,a1);
        break;
      case '8':
        b1 = 128;
        m1 = 72;
        a1 = 48;
        posServo(b1,m1,a1);
        break;
      case '9':
        b1 = 140;
        m1 = 73;
        a1 = 60;
        posServo(b1,m1,a1);
        break;
      case 'a':
        b1 = 145;
        m1 = 74;
        a1 = 77;
        posServo(b1,m1,a1);
        break;
      case 'b':
        b1 = 150;
        m1 = 80;
        a1 = 100;
        posServo(b1,m1,a1);
        break;
      case 'c':
        b1 = 152;
        m1 = 98;
        a1 = 134;
        posServo(b1,m1,a1);
        break;
      case 'd':
        b1 = 27;
        m1 = 110;
        a1 = 173;
        posServo(b1,m1,a1);
        break;
      case 'e':
        b1 = 33;
        m1 = 85;
        a1 = 118;
        posServo(b1,m1,a1);
        break;
      case 'f':
        b1 = 40;
        m1 = 74;
        a1 = 88;
        posServo(b1,m1,a1);
        break;
      case 'g':
        b1 = 50;
        m1 = 71;
        a1 = 73;
        posServo(b1,m1,a1);
        break;
      case 'h':
        b1 = 63;
        m1 = 70;
        a1 = 61;
        posServo(b1,m1,a1);
        break;
      case 'i':
        b1 = 83;
        m1 = 73;
        a1 = 57;
        posServo(b1,m1,a1);
        break;
      case 'j':
        b1 = 100;
        m1 = 73;
        a1 = 57;
        posServo(b1,m1,a1);
        break;
      case 'k':
        b1 = 119;
        m1 = 73;
        a1 = 60;
        posServo(b1,m1,a1);
        break;
      case 'l':
        b1 = 130;
        m1 = 74;
        a1 = 77;
        posServo(b1,m1,a1);
        break;
      case 'm':
        b1 = 135;
        m1 = 79;
        a1 = 90;
        posServo(b1,m1,a1);
        break;
      case 'n':
        b1 = 140;
        m1 = 87;
        a1 = 118;
        posServo(b1,m1,a1);
        break;
      case 'o':
        b1 = 143;
        m1 = 112;
        a1 = 170;
        posServo(b1,m1,a1);
        break;
      case 'p':
        b1 = 39;
        m1 = 100;
        a1 = 152;
        posServo(b1,m1,a1);
        break;
      case 'q':
        b1 = 47;
        m1 = 88;
        a1 = 118;
        posServo(b1,m1,a1);
        break;
      case 'r':
        b1 = 58;
        m1 = 76;
        a1 = 92;
        posServo(b1,m1,a1);
        break;
      case 's':
        b1 = 70;
        m1 = 74;
        a1 = 77;
        posServo(b1,m1,a1);
        break;
      case 't':
        b1 = 83;
        m1 = 74;
        a1 = 77;
        posServo(b1,m1,a1);
        break;
      case 'u':
        b1 = 96;
        m1 = 74;
        a1 = 77;
        posServo(b1,m1,a1);
        break;
      case 'v':
        b1 = 108;
        m1 = 74;
        a1 = 77;
        posServo(b1,m1,a1);
        break;
      case 'w':
        b1 = 119;
        m1 = 79;
        a1 = 90;
        posServo(b1,m1,a1);
        break;
      case 'x':
        b1 = 124;
        m1 = 87;
        a1 = 115;
        posServo(b1,m1,a1);
        break;
      case 'y':
        b1 = 130;
        m1 = 112;
        a1 = 170;
        posServo(b1,m1,a1);
        break;
      case 'z':
        b1 = 51;
        m1 = 100;
        a1 = 151;
        posServo(b1,m1,a1);
        break;
      case '!':
        b1 = 59;
        m1 = 87;
        a1 = 120;
        posServo(b1,m1,a1);
        break;
      case '"':
        b1 = 70;
        m1 = 85;
        a1 = 110;
        posServo(b1,m1,a1);
        break;
      case '#':
        b1 = 83;
        m1 = 84;
        a1 = 107;
        posServo(b1,m1,a1);
        break;
      case '$':
        b1 = 92;
        m1 = 84;
        a1 = 107;
        posServo(b1,m1,a1);
        break;
      case '%':
        b1 = 103;
        m1 = 89;
        a1 = 115;
        posServo(b1,m1,a1);
        break;
      case '&':
        b1 = 113;
        m1 = 92;
        a1 = 122;
        posServo(b1,m1,a1);
        break;
      case '(':
        b1 = 119;
        m1 = 112;
        a1 = 170;
        posServo(b1,m1,a1);
        break;
      case ')':
        b1 = 73;
        m1 = 112;
        a1 = 170;
        posServo(b1,m1,a1);
        break;
      case '*':
        b1 = 80;
        m1 = 112;
        a1 = 170;
        posServo(b1,m1,a1);
        break;
      case '-':
        b1 = 91;
        m1 = 112;
        a1 = 170;
        posServo(b1,m1,a1);
        break;
      case '/':
        b1 = 100;
        m1 = 112;
        a1 = 170;
        posServo(b1,m1,a1);
        break;
    }
    inByte = '0';
  }          
} // fin de loop

void posServo(int b, int m, int a ){
     servoB.write(b);              // tell servo to go to position in variable 'pos' 
      delay(150);                       // waits for the servo to reach the position                             
      servoA.write(a);              // tell servo to go to position in variable 'pos' 
      delay(150);                       // waits  for the servo to reach the position 
 // Servo medio
     
     for(posM = 0; posM <=m; posM += 1) // For para el servo medio
     {                                  // in steps of 1 degree 
      servoM.write(posM);              // tell servo to go to position in variable 'pos' 
      delay(150);                      
     } 
    
    digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(1000);              // wait for a second
    
    for(posM = m; posM>=0; posM-=1)     // goes from 'm' degrees to 0 degrees 
    {                                
      servoM.write(posM);              // tell servo to go to position in variable 'pos' 
      delay(150);                      
    }
  //Servo alto final
    if(a >= 70){
      for(posA = a; posA>=70; posA-=1)     // goes from 'a' degrees to 70 degrees 
    {                                
      servoA.write(posA);              // tell servo to go to position in variable 'pos' 
      delay(150);                       
    }  
    }else if(a < 70){
      for(posA = a; posA <=70; posA += 1) // For para el servo medio
     {                                  // in steps of 1 degree 
      servoA.write(posA);              // tell servo to go to position in variable 'pos' 
      delay(150);                      
     } 
    }

  // Servo base final
  for(posB = b; posB <=180 ; posB += 1) // For para el servo base
     {                                  // in steps of 1 degree 
      servoB.write(posB);              // tell servo to go to position in variable 'pos' 
      delay(150);                      
     } 
    digitalWrite(13, LOW);   // turn the LED on (HIGH is the voltage level)
    delay(1000);              // wait for a second
    inByte = '0';
  }

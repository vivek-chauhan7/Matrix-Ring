/*
 * 
 * 
 * ER BROS 
 * 
 * for more interesting videos...⤵
 * 
 * https://www.youtube.com/channel/UCY6KA8oFk1s36fyPiFEmedQ
 * 
 * blog
 * 
 * http://erbros1.blogspot.com/
 */


// rows (-ve)
#define a 4
#define b 5
#define c 6
#define d 7
#define e 8

// column (+ve)
#define AA 13
#define BB 12
#define CC 11
#define DD 10
#define EE 9

//button
#define button 2
int bs ;
int bc =0 ;

const byte rows[] = {
    AA, BB, CC, DD, EE
};
const byte col[] = {
  a, b, c, d, e
};

byte ALL[] = {B00000,B00000,B00000,B00000,B00000};
byte SQR[] = {B00000,B01110,B01110,B01110,B00000};
byte V[] = {B01110,B01110,B01110,B10101,B11011};
byte E[] = {B10000,B01111,B00001,B01111,B10000};
byte x[] = {B01110,B10101,B11011,B10101,B01110};
byte DIMAND[] = {B11011,B10101,B01110,B10101,B11011};
byte R[] = {B00011,B01101,B00011,B01011,B01101};
byte SMILE[] = {B11111,B10101,B11111,B01110,B10001};
byte REN[] = {B10101,B00100,B11111,B00100,B10101};
byte REN2[] = {B01010,B10101,B01010,B10101,B01010};
byte REN3[] = {B11011,B10001,B00000,B10001,B11011};
byte CROSS[] = {B11011,B00000,B11011,B11011,B11011};
byte HASH[] = {B10101,B00000,B10101,B00000,B10101};
byte B[] = {B00011,B01101,B00011,B01101,B00011};
byte O[] = {B10001,B01110,B01110,B01110,B10001};
byte S[] = {B10000,B01111,B10001,B11110,B00001};

byte N0[] = {B11011,B10101,B10101,B10101,B11011};
byte N1[] = {B11011,B10011,B11011,B11011,B10001};
byte N2[] = {B10011,B01101,B11011,B10111,B00001};
byte N3[] = {B10001,B01110,B11000,B01110,B10001};
byte N4[] = {B01101,B01101,B00001,B11101,B11101};
byte N5[] = {B00000,B01111,B00000,B11110,B00000};
byte N6[] = {B10000,B01111,B00001,B01110,B10001};
byte N7[] = {B00000,B11101,B11011,B11011,B11011};
byte N8[] = {B10001,B01110,B10001,B01110,B10001};
byte N9[] = {B10001,B01110,B10000,B11110,B00001};

byte HEART[] = {B10101,B01010,B01110,B10101,B11011};
byte THUNDER[] = {B11011,B10111,B00000,B11101,B11011};

// LINE animation
byte LN1[] = {B11011,B11011,B11011,B11011,B11011};
byte LN2[] = {B11110,B11101,B11011,B10111,B01111};
byte LN3[] = {B11111,B11111,B00000,B11111,B11111};
byte LN4[] = {B01111,B10111,B11011,B11101,B11110};



/*---------------------------------------------------------*/
byte S1[] = {B01111,B11111,B11111,B11111,B11111};
byte S2[] = {B10111,B01111,B11111,B11111,B11111};
byte S3[] = {B11011,B10111,B01111,B11111,B11111};
byte S4[] = {B11101,B11011,B10111,B01111,B11111};
byte S5[] = {B11110,B11101,B11011,B10111,B01111};
byte S6[] = {B11111,B11110,B11101,B11011,B10111};
byte S7[] = {B11111,B11111,B11110,B11101,B11011};
byte S8[] = {B11111,B11111,B11111,B11110,B11101};
byte S9[] = {B11111,B11111,B11111,B11111,B11110};


byte L1[] = {B11110,B11111,B11111,B11111,B11111};
byte L2[] = {B11110,B11110,B11111,B11111,B11111};
byte L3[] = {B11110,B11110,B11110,B11111,B11111};
byte L4[] = {B11110,B11110,B11110,B11110,B11111};
byte L5[] = {B11110,B11110,B11110,B11110,B11110};
byte L6[] = {B11111,B11110,B11110,B11110,B11110};
byte L7[] = {B11111,B11111,B11110,B11110,B11110};
byte L8[] = {B11111,B11111,B11111,B11110,B11110};
byte L9[] = {B11111,B11111,B11111,B11111,B11110};

/*----------------------------------------------------------
*/
float timeCount = 0;
float timeCount1 = 0;
float timeCount2 = 0;
float timeCount3 = 0; 
float timeCount4 = 0;
float timeCount5 = 0;
float timec = 0;


int spd = 50;

void setup() {
  // initialize pins as output 
  pinMode(a, OUTPUT); 
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);

  pinMode(AA, OUTPUT);
  pinMode(BB, OUTPUT);
  pinMode(CC, OUTPUT);
  pinMode(DD, OUTPUT);
  pinMode(EE, OUTPUT);
  pinMode(button, INPUT_PULLUP);


}


void  drawScreen(byte buffer2[])
 { 
   // Turn on each row in series
    for (byte i = 0; i < 5; i++)        // count next row
     {
        digitalWrite(rows[i], HIGH);    //initiate whole row
        for (byte x = 0; x < 5; x++)    // count next row
        {
          // if You set (~buffer2[i] >> x) then You will have positive
          digitalWrite(col[x], (buffer2[i] >> x) & 0x01); // initiate whole column
          
          delayMicroseconds(100);       // uncoment deley for diferent speed of display
          //delayMicroseconds(1000);
          //delay(10);
          //delay(100);
          
          digitalWrite(col[x], 1);      // reset whole column
        }
        digitalWrite(rows[i], LOW);     // reset whole row
        // otherwise last row will intersect with next row
    }
}
    

void erbros() {

  timeCount += 0.5;

  if(timeCount < 20) {
    drawScreen(SQR);
    }
    else if (timeCount < 40) {
    drawScreen(THUNDER);
    }
    else if (timeCount < 60) {
    drawScreen(E);
    }
    else if (timeCount < 80) {
     drawScreen(R);
    }
    else if (timeCount < 100) {
    drawScreen(B);
    }
    else if (timeCount < 120) {
    drawScreen(R);
    }
    else if (timeCount < 140) {
    drawScreen(O);
    }
    else if (timeCount < 160) {
    drawScreen(S);
    }
    else {
    timeCount = 0;
  }

  }

 void num() {
    timeCount1 += 1;

  if(timeCount1 < 50) {
    drawScreen(N9);
  }
  else if (timeCount1 < 100) {
    drawScreen(N8);
  }
  else if (timeCount1 < 150) {
    drawScreen(N7);
  }
  else if (timeCount1 < 200) {
    drawScreen(N6);
  }
  else if (timeCount1 < 250) {
    drawScreen(N5);
  }
  else if (timeCount1 < 300) {
    drawScreen(N4);
  }
  else if (timeCount1 < 350) {
    drawScreen(N3);
  }
  else if (timeCount1 < 400) {
    drawScreen(N2);
  }
  else if (timeCount1 < 450) {
    drawScreen(N1);
  }
  else if (timeCount1 < 500) {
    drawScreen(N0);
  }
  else {
    timeCount1 = 0;
  }

  }

  void custom() {
    timeCount2 += 0.5;

  if(timeCount2 < 50) {
    drawScreen(ALL);
  }
  else if (timeCount2 < 100) {
    drawScreen(SQR);
  }
  else if (timeCount2 < 150) {
    drawScreen(DIMAND);
  }
  else if (timeCount2 < 200) {
    drawScreen(SMILE);
  }
  else if (timeCount2 < 250) {
    drawScreen(REN);
  }
  else if (timeCount2 < 300) {
    drawScreen(REN2);
  }
  else if (timeCount2 < 350) {
    drawScreen(REN3);
  }
  else if (timeCount2 < 400) {
    drawScreen(CROSS);
  }
  else if (timeCount2 < 450) {
    drawScreen(HASH);
  }
  else if (timeCount2 < 500) {
    drawScreen(HEART);
  }
  else if (timeCount2 < 550) {
    drawScreen(THUNDER);
  }
  else {
    timeCount2 = 0;
  }
    
  }

  void line() {

    float  x = 0;
    timeCount3 += 2;

  if(timeCount3 < 10) {
    drawScreen(LN1);
  }
  else if (timeCount3 < 20) {
    drawScreen(LN2);
  }
  else if (timeCount3 < 30) {
    drawScreen(LN3);
  }
  else if (timeCount3 < 40) {
    drawScreen(LN4);
  }
  else {
    timeCount3 = 0;
    
  }
    
    
   
    }

    
    
void syn() {
   timeCount4 += 9;

  if(timeCount4 < 20) {
    drawScreen(S1);
    }
    else if (timeCount4 < 40) {
    drawScreen(S2);
    }
    else if (timeCount4 < 60) {
    drawScreen(S3);
    }
     else if (timeCount4 < 80) {
    drawScreen(S4);
    }
     else if (timeCount4 < 100) {
    drawScreen(S5);
    }
     else if (timeCount4 < 120) {
    drawScreen(S6);
    }
     else if (timeCount4 < 140) {
    drawScreen(S7);
    }
     else if (timeCount4 < 160) {
    drawScreen(S8);
    }
     else if (timeCount4 < 180) {
    drawScreen(S9);
    }
    else {
      timeCount4 = 0;}
  
  }


  void Ln() {
   timeCount5 += 4;

  if(timeCount5 < 20) {
    drawScreen(L1);
    }
     else if (timeCount5 < 40) {
    drawScreen(L2);
    }
     else if (timeCount5 < 60) {
    drawScreen(L3);
    }
     else if (timeCount5 < 80) {
    drawScreen(L4);
    }
     else if (timeCount5 < 100) {
    drawScreen(L5);
    }
     else if (timeCount5 < 120) {
    drawScreen(L6);
    }
     else if (timeCount5 < 140) {
    drawScreen(L7);
    }
     else if (timeCount5 < 160) {
    drawScreen(L8);
    }
     else if (timeCount5 < 180) {
    drawScreen(L9);
    }
    else {
      timeCount5 = 0;}
  
  }

 

void loop() {
  delay(5);// brightness
  
  
 /* timec += 0.5;
  if (timec < 200) {
    erbros();
    }
    else if ( timec < 450) {
      num();
      }
    else if ( timec < 1100) {
      custom();
      }
    else if ( timec < 1600) {
      line();
      }
    else {
      timec = 0;
      }*/
  bs = digitalRead(button);
  if (bs == LOW) {
    delay(100);
    bc == bc++;
    }
  if (bc == 1) {
    //delay(5);// brightness
    erbros();
    }
  if (bc == 2) {
   // delay(5);// brightness
    num();
    }
  if (bc == 3) {
    //delay(5);// brightness
    custom();
    }
  if (bc == 4) {
    //delay(5);// brightness
    line();
    }
  if (bc == 5) {
    syn();}
    
  if (bc == 6) {
    Ln();}    
     
  if (bc == 7) {
    bc =0;}     
  
  //erbros();

  //num();
  
  //custom();
  
  //line();
  
    
  } 
  

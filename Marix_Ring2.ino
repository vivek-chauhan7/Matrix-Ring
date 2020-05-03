// rows (-ve)
#define a 8
#define b 7
#define c 6
#define d 5
#define e 4

// column (+ve)
#define AA 13
#define BB 12
#define CC 11
#define DD 10
#define EE 9

#define button 2
int bs ;
int bc = 0;

int spd = 10;
int spd2 = 10;
int spd3 = 20;
int spd4 = 10;
int spd5 = 20;
int spd6 = 10;

void setup() {
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


  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);

  digitalWrite(AA, LOW);
  digitalWrite(BB, LOW);
  digitalWrite(CC, LOW);
  digitalWrite(DD, LOW);
  digitalWrite(EE, LOW);  

}

void square() {  // for square animations
  digitalWrite(a, LOW);
  digitalWrite(AA, HIGH);
  delay(spd);
  digitalWrite(a, HIGH);
  digitalWrite(AA, LOW);
  delay(spd);
  
  digitalWrite(b, LOW);
  digitalWrite(AA, HIGH);
  delay(spd);
  digitalWrite(b, HIGH);
  digitalWrite(AA, LOW);
  delay(spd);
  digitalWrite(c, LOW);
  digitalWrite(AA, HIGH);
  delay(spd);
  digitalWrite(c, HIGH);
  digitalWrite(AA, LOW);
  delay(spd);
  
  digitalWrite(d, LOW);
  digitalWrite(AA, HIGH);
  delay(spd);
  digitalWrite(d, HIGH);
  digitalWrite(AA, LOW);
  delay(spd);
  
  digitalWrite(e, LOW);
  digitalWrite(AA, HIGH);
  delay(spd);
  digitalWrite(e, HIGH);
  digitalWrite(AA, LOW);
  delay(spd);


  digitalWrite(e, LOW);
  digitalWrite(BB, HIGH);
  delay(spd);
  digitalWrite(e, HIGH);
  digitalWrite(BB, LOW);
  delay(spd);

  digitalWrite(e, LOW);
  digitalWrite(CC, HIGH);
  delay(spd);
  digitalWrite(e, HIGH);
  digitalWrite(CC, LOW);
  delay(spd);

  digitalWrite(e, LOW);
  digitalWrite(CC, HIGH);
  delay(spd);
  digitalWrite(e, HIGH);
  digitalWrite(CC, LOW);
  delay(spd);

  digitalWrite(e, LOW);
  digitalWrite(DD, HIGH);
  delay(spd);
  digitalWrite(e, HIGH);
  digitalWrite(DD, LOW);
  delay(spd);

  digitalWrite(e, LOW);
  digitalWrite(EE, HIGH);
  delay(spd);
  digitalWrite(e, HIGH);
  digitalWrite(EE, LOW);
  delay(spd);

  digitalWrite(d, LOW);
  digitalWrite(EE, HIGH);
  delay(spd);
  digitalWrite(d, HIGH);
  digitalWrite(EE, LOW);
  delay(spd);

  digitalWrite(c, LOW);
  digitalWrite(EE, HIGH);
  delay(spd);
  digitalWrite(c, HIGH);
  digitalWrite(EE, LOW);
  delay(spd);

  digitalWrite(b, LOW);
  digitalWrite(EE, HIGH);
  delay(spd);
  digitalWrite(b, HIGH);
  digitalWrite(EE, LOW);
  delay(spd);

  digitalWrite(a, LOW);
  digitalWrite(EE, HIGH);
  delay(spd);
  digitalWrite(a, HIGH);
  digitalWrite(EE, LOW);
  delay(spd);

  digitalWrite(a, LOW);
  digitalWrite(DD, HIGH);
  delay(spd);
  digitalWrite(a, HIGH);
  digitalWrite(DD, LOW);
  delay(spd);

  digitalWrite(a, LOW);
  digitalWrite(CC, HIGH);
  delay(spd);
  digitalWrite(a, HIGH);
  digitalWrite(CC, LOW);
  delay(spd);

  digitalWrite(a, LOW);
  digitalWrite(BB, HIGH);
  delay(spd);
  digitalWrite(a, HIGH);
  digitalWrite(BB, LOW);
  delay(spd);

}

void snk() { //snake like...............................................

  digitalWrite(a, LOW);
  digitalWrite(AA, HIGH);
  delay(spd2);
  digitalWrite(a, HIGH);
  digitalWrite(AA, LOW);
  delay(spd2);
  
  digitalWrite(b, LOW);
  digitalWrite(AA, HIGH);
  delay(spd2);
  digitalWrite(b, HIGH);
  digitalWrite(AA, LOW);
  delay(spd2);
  digitalWrite(c, LOW);
  digitalWrite(AA, HIGH);
  delay(spd2);
  digitalWrite(c, HIGH);
  digitalWrite(AA, LOW);
  delay(spd2);
  
  digitalWrite(d, LOW);
  digitalWrite(AA, HIGH);
  delay(spd2);
  digitalWrite(d, HIGH);
  digitalWrite(AA, LOW);
  delay(spd2);
  
  digitalWrite(e, LOW);
  digitalWrite(AA, HIGH);
  delay(spd2);
  digitalWrite(e, HIGH);
  digitalWrite(AA, LOW);
  delay(spd2); //DIF  

  digitalWrite(e, LOW);
  digitalWrite(BB, HIGH);
  delay(spd2);
  digitalWrite(e, HIGH);
  digitalWrite(BB, LOW);
  delay(spd2);

  digitalWrite(d, LOW);
  digitalWrite(BB, HIGH);
  delay(spd2);
  digitalWrite(d, HIGH);
  digitalWrite(BB, LOW);
  delay(spd2);

  digitalWrite(c, LOW);
  digitalWrite(BB, HIGH);
  delay(spd2);
  digitalWrite(c, HIGH);
  digitalWrite(BB, LOW);
  delay(spd2);

  digitalWrite(b, LOW);
  digitalWrite(BB, HIGH);
  delay(spd2);
  digitalWrite(b, HIGH);
  digitalWrite(BB, LOW);
  delay(spd2);

  digitalWrite(a, LOW);
  digitalWrite(BB, HIGH);
  delay(spd2);
  digitalWrite(a, HIGH);
  digitalWrite(BB, LOW);
  delay(spd2); // DIFF

  digitalWrite(a, LOW);
  digitalWrite(CC, HIGH);
  delay(spd2);
  digitalWrite(a, HIGH);
  digitalWrite(CC, LOW);
  delay(spd2);

  digitalWrite(b, LOW);
  digitalWrite(CC, HIGH);
  delay(spd2);
  digitalWrite(b, HIGH);
  digitalWrite(CC, LOW);
  delay(spd2);

  digitalWrite(c, LOW);
  digitalWrite(CC, HIGH);
  delay(spd2);
  digitalWrite(c, HIGH);
  digitalWrite(CC, LOW);
  delay(spd2);

  digitalWrite(d, LOW);
  digitalWrite(CC, HIGH);
  delay(spd2);
  digitalWrite(d, HIGH);
  digitalWrite(CC, LOW);
  delay(spd2);

  digitalWrite(e, LOW);
  digitalWrite(CC, HIGH);
  delay(spd2);
  digitalWrite(e, HIGH);
  digitalWrite(CC, LOW);
  delay(spd2); //diff

  digitalWrite(e, LOW);
  digitalWrite(DD, HIGH);
  delay(spd2);
  digitalWrite(e, HIGH);
  digitalWrite(DD, LOW);
  delay(spd2);

  digitalWrite(d, LOW);
  digitalWrite(DD, HIGH);
  delay(spd2);
  digitalWrite(d, HIGH);
  digitalWrite(DD, LOW);
  delay(spd2);

  digitalWrite(c, LOW);
  digitalWrite(DD, HIGH);
  delay(spd2);
  digitalWrite(c, HIGH);
  digitalWrite(DD, LOW);
  delay(spd2);

  digitalWrite(b, LOW);
  digitalWrite(DD, HIGH);
  delay(spd2);
  digitalWrite(b, HIGH);
  digitalWrite(DD, LOW);
  delay(spd2);

  digitalWrite(a, LOW);
  digitalWrite(DD, HIGH);
  delay(spd2);
  digitalWrite(a, HIGH);
  digitalWrite(DD, LOW);
  delay(spd2); // DIFF

  digitalWrite(a, LOW);
  digitalWrite(EE, HIGH);
  delay(spd2);
  digitalWrite(a, HIGH);
  digitalWrite(EE, LOW);
  delay(spd2);

  digitalWrite(b, LOW);
  digitalWrite(EE, HIGH);
  delay(spd2);
  digitalWrite(b, HIGH);
  digitalWrite(EE, LOW);
  delay(spd2);

  digitalWrite(c, LOW);
  digitalWrite(EE, HIGH);
  delay(spd2);
  digitalWrite(c, HIGH);
  digitalWrite(EE, LOW);
  delay(spd2);

  digitalWrite(d, LOW);
  digitalWrite(EE, HIGH);
  delay(spd2);
  digitalWrite(d, HIGH);
  digitalWrite(EE, LOW);
  delay(spd2);

  digitalWrite(e, LOW);
  digitalWrite(EE, HIGH);
  delay(spd2);
  digitalWrite(e, HIGH);
  digitalWrite(EE, LOW);
  delay(spd2); //diff
 
  
}


void diamond() { //..................................................................................
  digitalWrite(AA, HIGH);
  digitalWrite(c, LOW);
  delay(spd3);
  digitalWrite(AA, LOW);
  digitalWrite(c, HIGH);
  delay(spd3);

  digitalWrite(BB, HIGH);
  digitalWrite(d, LOW);
  delay(spd3);
  digitalWrite(BB, LOW);
  digitalWrite(d, HIGH);
  delay(spd3);

digitalWrite(CC, HIGH);
  digitalWrite(e, LOW);
  delay(spd3);
  digitalWrite(CC, LOW);
  digitalWrite(e, HIGH);
  delay(spd3);

digitalWrite(DD, HIGH);
  digitalWrite(d, LOW);
  delay(spd3);
  digitalWrite(DD, LOW);
  digitalWrite(d, HIGH);
  delay(spd3);

  digitalWrite(EE, HIGH);
  digitalWrite(c, LOW);
  delay(spd3);
  digitalWrite(EE, LOW);
  digitalWrite(c, HIGH);
  delay(spd3);

  digitalWrite(DD, HIGH);
  digitalWrite(b, LOW);
  delay(spd3);
  digitalWrite(DD, LOW);
  digitalWrite(b, HIGH);
  delay(spd3);

  digitalWrite(CC, HIGH);
  digitalWrite(a, LOW);
  delay(spd3);
  digitalWrite(CC, LOW);
  digitalWrite(a, HIGH);
  delay(spd3);

  digitalWrite(BB, HIGH);
  digitalWrite(b, LOW);
  delay(spd3);
  digitalWrite(BB, LOW);
  digitalWrite(b, HIGH);
  delay(spd3);
}

void sine() {//...................................................................

  digitalWrite(EE, HIGH);
  digitalWrite(a, LOW);
  delay(spd4);
  digitalWrite(EE, LOW);
  digitalWrite(a, HIGH);
  delay(spd4);

  digitalWrite(DD, HIGH);
  digitalWrite(b, LOW);
  delay(spd4);
  digitalWrite(DD, LOW);
  digitalWrite(b, HIGH);
  delay(spd4);

  digitalWrite(CC, HIGH);
  digitalWrite(b, LOW);
  delay(spd4);
  digitalWrite(CC, LOW);
  digitalWrite(b, HIGH);
  delay(spd4);

  digitalWrite(BB, HIGH);
  digitalWrite(b, LOW);
  delay(spd4);
  digitalWrite(BB, LOW);
  digitalWrite(b, HIGH);
  delay(spd4);

  digitalWrite(AA, HIGH);
  digitalWrite(c, LOW);
  delay(spd4);
  digitalWrite(AA, LOW);
  digitalWrite(c, HIGH);
  delay(spd4);

  digitalWrite(BB, HIGH);
  digitalWrite(d, LOW);
  delay(spd4);
  digitalWrite(BB, LOW);
  digitalWrite(d, HIGH);
  delay(spd4);

  digitalWrite(CC, HIGH);
  digitalWrite(d, LOW);
  delay(spd4);
  digitalWrite(CC, LOW);
  digitalWrite(d, HIGH);
  delay(spd4);

  digitalWrite(DD, HIGH);
  digitalWrite(d, LOW);
  delay(spd4);
  digitalWrite(DD, LOW);
  digitalWrite(d, HIGH);
  delay(spd4);

  digitalWrite(EE, HIGH);
  digitalWrite(e, LOW);
  delay(spd4);
  digitalWrite(EE, LOW);
  digitalWrite(e, HIGH);
  delay(spd4);
  
  
}


void rendom() {
  digitalWrite(EE, HIGH);
  digitalWrite(e, LOW);
  delay(spd5);
  digitalWrite(EE, LOW);
  digitalWrite(e, HIGH);
  delay(spd5);

  digitalWrite(CC, HIGH);
  digitalWrite(d, LOW);
  delay(spd5);
  digitalWrite(CC, LOW);
  digitalWrite(d, HIGH);
  delay(spd5);

  digitalWrite(BB, HIGH);
  digitalWrite(d, LOW);
  delay(spd5);
  digitalWrite(BB, LOW);
  digitalWrite(d, HIGH);
  delay(spd5);

  digitalWrite(AA, HIGH);
  digitalWrite(e, LOW);
  delay(spd5);
  digitalWrite(AA, LOW);
  digitalWrite(e, HIGH);
  delay(spd5);

  digitalWrite(DD, HIGH);
  digitalWrite(d, LOW);
  delay(spd5);
  digitalWrite(DD, LOW);
  digitalWrite(d, HIGH);
  delay(spd5);

  digitalWrite(EE, HIGH);
  digitalWrite(a, LOW);
  delay(spd5);
  digitalWrite(EE, LOW);
  digitalWrite(a, HIGH);
  delay(spd5);

  digitalWrite(AA, HIGH);
  digitalWrite(c, LOW);
  delay(spd5);
  digitalWrite(AA, LOW);
  digitalWrite(c, HIGH);
  delay(spd5);

  digitalWrite(BB, HIGH);
  digitalWrite(e, LOW);
  delay(spd5);
  digitalWrite(BB, LOW);
  digitalWrite(e, HIGH);
  delay(spd5);

  digitalWrite(DD, HIGH);
  digitalWrite(b, LOW);
  delay(spd5);
  digitalWrite(DD, LOW);
  digitalWrite(b, HIGH);
  delay(spd5);

  digitalWrite(CC, HIGH);
  digitalWrite(d, LOW);
  delay(spd5);
  digitalWrite(CC, LOW);
  digitalWrite(d, HIGH);
  delay(spd5);

  digitalWrite(EE, HIGH);
  digitalWrite(b, LOW);
  delay(spd5);
  digitalWrite(EE, LOW);
  digitalWrite(b, HIGH);
  delay(spd5);

  digitalWrite(CC, HIGH);
  digitalWrite(e, LOW);
  delay(spd5);
  digitalWrite(CC, LOW);
  digitalWrite(e, HIGH);
  delay(spd5);

  digitalWrite(BB, HIGH);
  digitalWrite(a, LOW);
  delay(spd5);
  digitalWrite(BB, LOW);
  digitalWrite(a, HIGH);
  delay(spd5);

  digitalWrite(DD, HIGH);
  digitalWrite(e, LOW);
  delay(spd5);
  digitalWrite(DD, LOW);
  digitalWrite(e, HIGH);
  delay(spd5);

  digitalWrite(AA, HIGH);
  digitalWrite(b, LOW);
  delay(spd5);
  digitalWrite(AA, LOW);
  digitalWrite(b, HIGH);
  delay(spd5);

  digitalWrite(EE, HIGH);
  digitalWrite(c, LOW);
  delay(spd5);
  digitalWrite(EE, LOW);
  digitalWrite(c, HIGH);
  delay(spd5);

  digitalWrite(CC, HIGH);
  digitalWrite(a, LOW);
  delay(spd5);
  digitalWrite(CC, LOW);
  digitalWrite(a, HIGH);
  delay(spd5);

  digitalWrite(BB, HIGH);
  digitalWrite(c, LOW);
  delay(spd5);
  digitalWrite(BB, LOW);
  digitalWrite(c, HIGH);
  delay(spd5);

  digitalWrite(DD, HIGH);
  digitalWrite(a, LOW);
  delay(spd5);
  digitalWrite(DD, LOW);
  digitalWrite(a, HIGH);
  delay(spd5);

  digitalWrite(AA, HIGH);
  digitalWrite(d, LOW);
  delay(spd5);
  digitalWrite(AA, LOW);
  digitalWrite(d, HIGH);
  delay(spd5);

  digitalWrite(EE, HIGH);
  digitalWrite(d, LOW);
  delay(spd5);
  digitalWrite(EE, LOW);
  digitalWrite(d, HIGH);
  delay(spd5);

  digitalWrite(CC, HIGH);
  digitalWrite(b, LOW);
  delay(spd5);
  digitalWrite(CC, LOW);
  digitalWrite(b, HIGH);
  delay(spd5);

  digitalWrite(BB, HIGH);
  digitalWrite(e, LOW);
  delay(spd5);
  digitalWrite(BB, LOW);
  digitalWrite(e, HIGH);
  delay(spd5);

  digitalWrite(DD, HIGH);
  digitalWrite(c, LOW);
  delay(spd5);
  digitalWrite(DD, LOW);
  digitalWrite(c, HIGH);
  delay(spd5);

  digitalWrite(AA, HIGH);
  digitalWrite(a, LOW);
  delay(spd5);
  digitalWrite(AA, LOW);
  digitalWrite(a, HIGH);
  delay(spd5);

  
}

void spiral() {
  digitalWrite(a, LOW);
  digitalWrite(AA, HIGH);
  delay(spd6);
  digitalWrite(a, HIGH);
  digitalWrite(AA, LOW);
  delay(spd6); //2 ..........................................................
  
  digitalWrite(b, LOW);
  digitalWrite(AA, HIGH);
  delay(spd6);
  digitalWrite(b, HIGH);
  digitalWrite(AA, LOW);
  delay(spd6); //3   .......................................................
  
  digitalWrite(c, LOW);
  digitalWrite(AA, HIGH);
  delay(spd6);
  digitalWrite(c, HIGH);
  digitalWrite(AA, LOW);
  delay(spd6); //4   ..................................................... 
  
  digitalWrite(d, LOW);
  digitalWrite(AA, HIGH);
  delay(spd6);
  digitalWrite(d, HIGH);
  digitalWrite(AA, LOW);
  delay(spd6);//5  .................................................... 
  
  digitalWrite(e, LOW);
  digitalWrite(AA, HIGH);
  delay(spd6);
  digitalWrite(e, HIGH);
  digitalWrite(AA, LOW);
  delay(spd6);  //6  ...................................................... 


  digitalWrite(e, LOW);
  digitalWrite(BB, HIGH);
  delay(spd6);
  digitalWrite(e, HIGH);
  digitalWrite(BB, LOW);
  delay(spd6); //7  ................................................................... 

  digitalWrite(e, LOW);
  digitalWrite(CC, HIGH);
  delay(spd6);
  digitalWrite(e, HIGH);
  digitalWrite(CC, LOW);
  delay(spd6); //8   ......................................................... 

  digitalWrite(e, LOW);
  digitalWrite(DD, HIGH);
  delay(spd6);
  digitalWrite(e, HIGH);
  digitalWrite(DD, LOW);
  delay(spd6);//9  ..........................................................

  digitalWrite(e, LOW);
  digitalWrite(EE, HIGH);
  delay(spd6);
  digitalWrite(e, HIGH);
  digitalWrite(EE, LOW);
  delay(spd6); //10  .............................................................

  digitalWrite(d, LOW);
  digitalWrite(EE, HIGH);
  delay(spd6);
  digitalWrite(d, HIGH);
  digitalWrite(EE, LOW);
  delay(spd6); //11  ............................................................

  digitalWrite(c, LOW);
  digitalWrite(EE, HIGH);
  delay(spd6);
  digitalWrite(c, HIGH);
  digitalWrite(EE, LOW);
  delay(spd6); //12  .....................................................

  digitalWrite(b, LOW);
  digitalWrite(EE, HIGH);
  delay(spd6);
  digitalWrite(b, HIGH);
  digitalWrite(EE, LOW);
  delay(spd6); // 13   ..............................................................

  digitalWrite(a, LOW);
  digitalWrite(EE, HIGH);
  delay(spd6);
  digitalWrite(a, HIGH);
  digitalWrite(EE, LOW);
  delay(spd6); // 14 ......................................................

  digitalWrite(a, LOW);
  digitalWrite(DD, HIGH);
  delay(spd6);
  digitalWrite(a, HIGH);
  digitalWrite(DD, LOW);
  delay(spd6); //15  ..................................................

  digitalWrite(a, LOW);
  digitalWrite(CC, HIGH);
  delay(spd6);
  digitalWrite(a, HIGH);
  digitalWrite(CC, LOW);
  delay(spd6); //16 ...................................................

  digitalWrite(a, LOW);
  digitalWrite(BB, HIGH);
  delay(spd6);
  digitalWrite(a, HIGH);
  digitalWrite(BB, LOW);
  delay(spd6); //17 ..............................................................

  digitalWrite(b, LOW);
  digitalWrite(BB, HIGH);
  delay(spd6);
  digitalWrite(b, HIGH);
  digitalWrite(BB, LOW);
  delay(spd6); //18................................................

  digitalWrite(c, LOW);
  digitalWrite(BB, HIGH);
  delay(spd6);
  digitalWrite(c, HIGH);
  digitalWrite(BB, LOW);
  delay(spd6); // 19 ............................................. 

  digitalWrite(d, LOW);
  digitalWrite(BB, HIGH);
  delay(spd6);
  digitalWrite(d, HIGH);
  digitalWrite(BB, LOW);
  delay(spd6); //20 ...................................................

  digitalWrite(d, LOW);
  digitalWrite(CC, HIGH);
  delay(spd6);
  digitalWrite(d, HIGH);
  digitalWrite(CC, LOW);
  delay(spd6); //21 ...................................

  digitalWrite(d, LOW);
  digitalWrite(DD, HIGH);
  delay(spd6);
  digitalWrite(d, HIGH);
  digitalWrite(DD, LOW);
  delay(spd6); //22     ...........................................

  digitalWrite(c, LOW);
  digitalWrite(DD, HIGH);
  delay(spd6);
  digitalWrite(c, HIGH);
  digitalWrite(DD, LOW);
  delay(spd6); //23........................................

  digitalWrite(b, LOW);
  digitalWrite(DD, HIGH);
  delay(spd6);
  digitalWrite(b, HIGH);
  digitalWrite(DD, LOW);
  delay(spd6); //24 ........................................

  digitalWrite(b, LOW);
  digitalWrite(CC, HIGH);
  delay(spd6);
  digitalWrite(b, HIGH);
  digitalWrite(CC, LOW);
  delay(spd6); //25......................................

  digitalWrite(c, LOW);
  digitalWrite(CC, HIGH);
  delay(spd6);
  digitalWrite(c, HIGH);
  digitalWrite(CC, LOW);
  delay(spd6); // 26 .................................................

  digitalWrite(b, LOW);
  digitalWrite(CC, HIGH);
  delay(spd6);
  digitalWrite(b, HIGH);
  digitalWrite(CC, LOW);
  delay(spd6); //25......................................

  digitalWrite(b, LOW);
  digitalWrite(DD, HIGH);
  delay(spd6);
  digitalWrite(b, HIGH);
  digitalWrite(DD, LOW);
  delay(spd6); //24.....................................................

  digitalWrite(c, LOW);
  digitalWrite(DD, HIGH);
  delay(spd6);
  digitalWrite(c, HIGH);
  digitalWrite(DD, LOW);
  delay(spd6); //23........................................

  digitalWrite(d, LOW);
  digitalWrite(DD, HIGH);
  delay(spd6);
  digitalWrite(d, HIGH);
  digitalWrite(DD, LOW);
  delay(spd6); //22     ...........................................
  
  digitalWrite(d, LOW);
  digitalWrite(CC, HIGH);
  delay(spd6);
  digitalWrite(d, HIGH);
  digitalWrite(CC, LOW);
  delay(spd6); //21 ...................................
  
  digitalWrite(d, LOW);
  digitalWrite(BB, HIGH);
  delay(spd6);
  digitalWrite(d, HIGH);
  digitalWrite(BB, LOW);
  delay(spd6); //20 ...................................................
  
  digitalWrite(c, LOW);
  digitalWrite(BB, HIGH);
  delay(spd6);
  digitalWrite(c, HIGH);
  digitalWrite(BB, LOW);
  delay(spd6); // 19 ............................................. 

  digitalWrite(b, LOW);
  digitalWrite(BB, HIGH);
  delay(spd6);
  digitalWrite(b, HIGH);
  digitalWrite(BB, LOW);
  delay(spd6); //18................................................

  digitalWrite(a, LOW);
  digitalWrite(BB, HIGH);
  delay(spd6);
  digitalWrite(a, HIGH);
  digitalWrite(BB, LOW);
  delay(spd6); //17 ..............................................................

  digitalWrite(a, LOW);
  digitalWrite(CC, HIGH);
  delay(spd6);
  digitalWrite(a, HIGH);
  digitalWrite(CC, LOW);
  delay(spd6); //16 ...................................................

  digitalWrite(a, LOW);
  digitalWrite(DD, HIGH);
  delay(spd6);
  digitalWrite(a, HIGH);
  digitalWrite(DD, LOW);
  delay(spd6); //15  ..................................................

  digitalWrite(a, LOW);
  digitalWrite(EE, HIGH);
  delay(spd6);
  digitalWrite(a, HIGH);
  digitalWrite(EE, LOW);
  delay(spd6); // 14 ......................................................

  digitalWrite(b, LOW);
  digitalWrite(EE, HIGH);
  delay(spd6);
  digitalWrite(b, HIGH);
  digitalWrite(EE, LOW);
  delay(spd6); // 13   ..............................................................
  
  digitalWrite(c, LOW);
  digitalWrite(EE, HIGH);
  delay(spd6);
  digitalWrite(c, HIGH);
  digitalWrite(EE, LOW);
  delay(spd6); //12  .....................................................

  digitalWrite(d, LOW);
  digitalWrite(EE, HIGH);
  delay(spd6);
  digitalWrite(d, HIGH);
  digitalWrite(EE, LOW);
  delay(spd6); //11  ............................................................
  
  digitalWrite(e, LOW);
  digitalWrite(EE, HIGH);
  delay(spd6);
  digitalWrite(e, HIGH);
  digitalWrite(EE, LOW);
  delay(spd6); //10  ............................................................. 

  digitalWrite(e, LOW);
  digitalWrite(DD, HIGH);
  delay(spd6);
  digitalWrite(e, HIGH);
  digitalWrite(DD, LOW);
  delay(spd6);//9  ..........................................................

  digitalWrite(e, LOW);
  digitalWrite(CC, HIGH);
  delay(spd6);
  digitalWrite(e, HIGH);
  digitalWrite(CC, LOW);
  delay(spd6); //8   .........................................................

  digitalWrite(e, LOW);
  digitalWrite(BB, HIGH);
  delay(spd6);
  digitalWrite(e, HIGH);
  digitalWrite(BB, LOW);
  delay(spd6); //7  ...................................................................

  digitalWrite(e, LOW);
  digitalWrite(AA, HIGH);
  delay(spd6);
  digitalWrite(e, HIGH);
  digitalWrite(AA, LOW);
  delay(spd6);  //6  ......................................................
  
  digitalWrite(d, LOW);
  digitalWrite(AA, HIGH);
  delay(spd6);
  digitalWrite(d, HIGH);
  digitalWrite(AA, LOW);
  delay(spd6);//5  .................................................... 

  digitalWrite(c, LOW);
  digitalWrite(AA, HIGH);
  delay(spd6);
  digitalWrite(c, HIGH);
  digitalWrite(AA, LOW);
  delay(spd6); //4   ..................................................... 

  digitalWrite(b, LOW);
  digitalWrite(AA, HIGH);
  delay(spd6);
  digitalWrite(b, HIGH);
  digitalWrite(AA, LOW);
  delay(spd6); //3   .......................................................

  digitalWrite(a, LOW);
  digitalWrite(AA, HIGH);
  delay(spd6);
  digitalWrite(a, HIGH);
  digitalWrite(AA, LOW);
  delay(spd6); //2 ..........................................................

  
}


 

void loop() {
  delay
  (5);
  bs = digitalRead(button);

  if (bs == LOW) {
    delay(50);
    bc == bc++ ;
  }
  if (bc ==1) {
    square();
  }
  if (bc ==2) {
    snk();  
  }
  if (bc == 3) {
    diamond();
  }
  if (bc == 4) {
    sine();
  }
  if(bc == 5) {
    rendom();
  }
  if (bc == 6) {
    spiral();
  }
  if (bc == 7) {
    bc = 0;
  }
    
  /*square();
  delay(1000);
  snk();
  delay(1000);
  dimand();
 delay(1000);
  sine();
  delay(1000);
  rendom();
  delay(1000);
  spiral();
  */
}

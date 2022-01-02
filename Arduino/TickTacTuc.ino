#include <NewPing.h>
#include <Servo.h>


Servo serv1;
Servo serv2;
Servo serv3;
Servo serv4;

void setup() {
  Serial.begin(9600);
  serv1.attach(2);
  serv2.attach(3);
  serv3.attach(4);
  serv4.attach(5);
  serv1.write(110);
  serv2.write(80);
  serv3.write(50);
  serv4.write(30);
//  two();
}

void loop() {

  if(Serial.available()){
    char i = Serial.read();
    Serial.print(i);
    moveDirect(i);
  }
  
}

int pos1 = 110;
int pos2 = 80;
int pos3 = 50;
int pos4 = 30;

void moveDirect(char i){
  switch(i){
    case '1':
//      one();
       three();
      returnBack();
      break;
   case '2':
      two();
      returnBack();
      break; 
   case '3':
   one();
   
//      three();
      returnBack();
      break;
   case '4':
      four();
      returnBack();
      break; 
   case '5':
      five();
      returnBack();
      break;
   case '6':
      six();
      returnBack();
      break;
   case '7':
      seven();
      returnBack();
      break; 
   case '8':
      eight();
      returnBack();
      break;
   case '9':
      nine();
      returnBack();
      break;                  
     
    }
}

void one(){

for ( ; pos4 >= 25 ;pos4--){
        serv4.write(pos4);
        delay(50);
   }
  
   for (  ; pos2 <= 113 ;pos2++){
       serv2.write(pos2);
       delay(50);
  } 
   for (  ; pos1 >= 82 ;pos1--){
         serv1.write(pos1);
         delay(50);
   }
   
  for ( ; pos3 >= 11 ;pos3--){
        serv3.write(pos3);
        delay(50);
   }
   for ( ; pos4 <= 30 ;pos4++){
        serv4.write(pos4);
        delay(50);
   }
   for (  ; pos1 <= 105 ;pos1++){
         serv1.write(pos1);
         delay(50);
   }
    for ( ; pos3 <= 30 ;pos3++){
        serv3.write(pos3);
        delay(20);
   }
   
   X(20,90,118,30,5,98); 
}


void two(){
 for ( ; pos4 <= 20 ;pos4--){
        serv4.write(pos4);
        delay(50);
   }
   for (  ; pos2 <= 118 ;pos2++){
       serv2.write(pos2);
       delay(50);
  } 
  for ( ; pos3 >= 36;pos3--){
        serv3.write(pos3);
        delay(50);
   }
    for (  ; pos1 >= 65 ;pos1--){
         serv1.write(pos1);
         delay(50);
   }

     for ( ; pos3 >= 26;pos3--){
        serv3.write(pos3);
        delay(50);
   }

   for ( ; pos4 <= 40 ;pos4++){
        serv4.write(pos4);
        delay(50);
   }

   for (  ; pos1 <= 82 ;pos1++){
         serv1.write(pos1);
         delay(50);
   }

    for ( ; pos3 <= 40 ;pos3++){
        serv3.write(pos3);
        delay(50);
   }

 X(10,71,128,18,8, 117); 
}

void three(){
   for ( ; pos4 >= 8 ;pos4--){
        serv4.write(pos4);
        delay(50);
   }
   for (  ; pos2 <= 120 ;pos2++){
       serv2.write(pos2);
       delay(50);
  } 

   for (  ; pos1 >= 56 ;pos1--){
         serv1.write(pos1);
         delay(50);
   }
    for (  ; pos2 <= 138 ;pos2++){
       serv2.write(pos2);
       delay(50);
  } 
  for ( ; pos3 >= 35 ;pos3--){
        serv3.write(pos3);
        delay(50);
   }

    for ( ; pos4 <= 10 ;pos4++){
        serv4.write(pos4);
        delay(50);
   }

   for (  ; pos1 <= 70 ;pos1++){
         serv1.write(pos1);
         delay(50);
   }

  for ( ; pos4 >= 8 ;pos4--){
        serv4.write(pos4);
        delay(50);
   }

    for (  ; pos2 >= 138 ;pos2--){
       serv2.write(pos2);
       delay(50);
  } 

   for ( ; pos3 <= 50 ;pos3++){
        serv3.write(pos3);
        delay(50);
   }

 X(3,60,145,18,18, 130); 
}

void four(){
  
     for ( ; pos4 <= 10 ;pos4--){
        serv4.write(pos4);
        delay(50);
   }
  for (  ; pos2 <= 110 ;pos2++){
       serv2.write(pos2);
       delay(50);
  } 
     for (  ; pos1 >= 65 ;pos1--){
         serv1.write(pos1);
         delay(50);
   }
   
  for ( ; pos3 <= 60 ;pos3++){
        serv3.write(pos3);
        delay(50);
   }
   for (  ; pos2 <= 140 ;pos2++){
       serv2.write(pos2);
       delay(50);
  } 

   for ( ; pos4 <= 30 ;pos4++){
        serv4.write(pos4);
        delay(50);
   }

   for (  ; pos1 <= 80 ;pos1++){
         serv1.write(pos1);
         delay(50);
   }
   delay(50);
   serv4.write(5);
    delay(30);
   serv2.write(130);
    delay(30);
   serv3.write(75);

 X(5,70,160,25,43, 130); 
}

void five(){
for (  ; pos2 <= 110 ;pos2++){
       serv2.write(pos2);
       delay(50);
  } 
   for (  ; pos1 >= 75 ;pos1--){
         serv1.write(pos1);
         delay(50);
   }
   for ( ; pos4 >= 15 ;pos4--){
        serv4.write(pos4);
        delay(50);
   }
   for (  ; pos2 <= 132 ;pos2++){
       serv2.write(pos2);
       delay(50);
  } 
   
  for ( ; pos3 >= 35 ;pos3--){
        serv3.write(pos3);
        delay(50);
   }

   for ( ; pos4 <= 24 ;pos4++){
        serv4.write(pos4);
        delay(50);
   }

   for (  ; pos1 <= 93 ;pos1++){
         serv1.write(pos1);
         delay(50);
   }

//    serv4.write(5);
    for ( ; pos3 <= 50 ;pos3++){
        serv3.write(pos3);
        delay(50);
   }

 X(5,80,155,15,27, 125); 
}

void six(){
    for (  ; pos1 >= 92 ;pos1--){
         serv1.write(pos1);
         delay(50);
   }
   for ( ; pos4 >= 12 ;pos4--){
        serv4.write(pos4);
        delay(50);
   }
   for (  ; pos2 <= 128 ;pos2++){
       serv2.write(pos2);
       delay(50);
  } 
   
  for ( ; pos3 >= 27 ;pos3--){
        serv3.write(pos3);
        delay(50);
   }

   for ( ; pos4 <= 15 ;pos4++){
        serv4.write(pos4);
        delay(50);
   }

   for (  ; pos1 <= 107 ;pos1++){
         serv1.write(pos1);
         delay(50);
   }

    for ( ; pos3 <= 40 ;pos3++){
        serv3.write(pos3);
        delay(50);
   }

 X(5,97,155,10,18, 120); 
}

void seven(){
   for (  ; pos2 <= 110 ;pos2++){
       serv2.write(pos2);
       delay(50);
  } 
   for (  ; pos1 >= 73 ;pos1--){
         serv1.write(pos1);
         delay(50);
   }
  for ( ; pos3 <= 100 ;pos3++){
        serv3.write(pos3);
        delay(50);
   }
   for (  ; pos2 <= 155 ;pos2++){
       serv2.write(pos2);
       delay(50);
  } 

   
  for ( ; pos3 >= 85 ;pos3--){
        serv3.write(pos3);
        delay(50);
   }

   for ( ; pos4 <= 33 ;pos4++){
        serv4.write(pos4);
        delay(50);
   }

   for (  ; pos1 <= 87 ;pos1++){
         serv1.write(pos1);
         delay(50);
   }

    for ( ; pos3 <= 110 ;pos3++){
        serv3.write(pos3);
        delay(50);
   }

 X(5,77,180,50, 80, 140); 
}

void eight(){
   for (  ; pos2 <= 115 ;pos2++){
       serv2.write(pos2);
       delay(50);
  } 
    for (  ; pos1 >= 83 ;pos1--){
         serv1.write(pos1);
         delay(50);
   }
  for ( ; pos3 <= 70 ;pos3++){
        serv3.write(pos3);
        delay(50);
   }
   for (  ; pos2 <= 145 ;pos2++){
       serv2.write(pos2);
       delay(50);
  } 

   for (  ; pos1 <= 96 ;pos1++){
         serv1.write(pos1);
         delay(50);
   }
   for ( ; pos4 >= 10 ;pos4--){
        serv4.write(pos4);
        delay(50);
   }

    for ( ; pos3 <= 90 ;pos3++){
        serv3.write(pos3);
        delay(50);
   }

 X(10,87,160,30,55, 115); 
}

void nine(){
    
  for (  ; pos1 >= 96 ;pos1--){
         serv1.write(pos1);
         delay(50);
   }
  for ( ; pos3 <= 60 ;pos3++){
        serv3.write(pos3);
        delay(50);
   }

   for (  ; pos2 <= 150 ;pos2++){
       serv2.write(pos2);
       delay(50);
  } 

   for (  ; pos1 <= 108 ;pos1++){
         serv1.write(pos1);
         delay(50);
   }

    for ( ; pos4 >= 10 ;pos4--){
        serv4.write(pos4);
        delay(50);
   }

    for ( ; pos3 <= 85 ;pos3++){
        serv3.write(pos3);
        delay(50);
   }

 X(10,100,148,20,48, 120); 
}

void X(int c1,int c2,int c3,int c4,int c5, int c6){

for (  ; pos4 >= c1 ;pos4--){
       serv4.write(pos4);
       delay(50);
  }

   for (  ; pos1 >= c2 ;pos1--){
         serv1.write(pos1);
         delay(50);
   }

    for (  ; pos2 <= c3 ;pos2++){
       serv2.write(pos2);
       delay(50);
  } 

    for (  ; pos4 <= c4 ;pos4++){
       serv4.write(pos4);
       delay(50);
  }
    for ( ; pos3 >= c5 ;pos3--){
        serv3.write(pos3);
        delay(50);
   }

     for (  ; pos2 >= c6 ;pos2--){
       serv2.write(pos2);
       delay(50);
  } 


//    int p1 = pos1 + 3;
//    int p2 = pos2 - 15;
//    int p3 = pos3 - 13;
// int p4 = pos4 -  8;


//   while(pos1 < p1 || pos2 > p2 || pos3 > p3){
//      Serial.println("ddd");
//      if(pos1 < p1){
//        pos1++;
//        serv1.write(pos1);
//        delay(50);     
//     }
//     
//     if(pos2 > p2){
//       pos2--;
//       serv2.write(pos2);
//         delay(50);
//     }
//     
//     if(pos3 > p3){
//       pos3--;
//       serv3.write(pos3);
//       delay(100);
////       Serial.println(pos3);
//     }
//   
//  }

//   for (  ; pos3 <= 25 ;pos3++){
//         serv3.write(pos3);
//         delay(50);
//   }
//     for (  ; pos1 <= 100 ;pos1++){
//         serv1.write(pos1);
//         delay(20);
//    }
//
//      for (  ; pos2 <= 110 ;pos2++){
//         serv2.write(pos2);
//         delay(20);
//   }
//
//    for (  ; pos3 >= 8 ;pos3--){
//         serv3.write(pos3);
//         delay(50);
//   }
    
//   p1 = pos1 - 20;
//   p2 = pos2 - 3;
//   p3 = pos3 - 10;

//     while(pos1 < p1 || pos2 > p2 || pos3 > p3){
//      if(pos1 > p1){
//        pos1 -=2;
//        serv1.write(pos1);
//        delay(50);     
//     }
//     
////     if(pos2 > p2){
////       pos2--;
////       serv2.write(pos2);
////         delay(50);
////     }
//     
//     if(pos3 > p3){
//       pos3--;
//       serv3.write(pos3);
//       delay(100);
//     }
//   
//  }

}
//    if(pos4 > p4){
//     pos4--;
//     serv4.write(pos4);
//     delay(100);
//   }
//   }

//   serv1.write(110);
//  serv2.write(80);
//  serv3.write(50);
//  serv4.write(30);
 
void returnBack(){
    for (  ; pos4 >= 30 ;pos4--){
         serv4.write(pos4);
         delay(30);
   }  
  for (  ; pos3 <= 40 ;pos3++){
          serv3.write(pos3);
          delay(30);
   }
    for (  ; pos2 >= 105 ;pos2--){
         serv2.write(pos2);
         delay(30);
   }  
    for (  ; pos3 >= 40 ;pos3--){
          serv3.write(pos3);
          delay(30);
   }
    for( ; pos1 <= 110 ; pos1++){
     serv1.write(pos1);
     delay(30);
    }
    for (  ; pos2 >= 80 ;pos2--){
       serv2.write(pos2);
       delay(30);
   }  


      for (  ; pos4 <= 30 ;pos4++){
         serv4.write(pos4);
         delay(30);
   }  

   
 
}

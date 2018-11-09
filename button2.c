#include <wiringPi.h> 
#include <stdio.h> 
int main (int argc, char *argv[]) 
{ 
  wiringPiSetup () ; 
  pinMode (1, INPUT) ;
  pinMode (0, OUTPUT) ; 
  pullUpDnControl(1, PUD_UP) ; 
  for (;;) 
  { 
    int x = digitalRead(1); 
    if(x == 0)
     {
       digitalWrite (0, HIGH) ; delay (1000) ;
     }
else
 {
  digitalWrite (0, LOW) ; delay(1000) ; 
 }
  } 
  return 0 ; 
} 

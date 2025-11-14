#include<stdio.h>
int   main()
   {
    enum  Car { tata  , lamborghini, audi, maruti, honda, fiat };
    Car c;
  c = tata;
 switch(c) { 
   case lamborghini: 
    printf("You choose lamborghini!"); 
   break; 
   case tata: 
    printf("You choose tata!"); 
   break; 
   case 2: 
    printf("You choose audi!"); 
   break; 
   case fiat: 
    printf("You choose fiat!"); 
   break; 
   case honda: 
    printf("You choose honda!"); 
   break; 
   default: 
    printf("I don't know your car."); 
   break; 
  } 
   }
//LOOPS THROUGH POINTERS
#include<stdio.h>
int main(){
    int a[10],n,*p;
    printf("ENTER SIZE \n");
    scanf("%d",&n);
    printf("ENTER NO \n");
    for(p=a;p<(a+n);p++){
	scanf("%d",p); // address
    }
    printf("NO \n");
    for( p = a ; p < (a+n) ; p++ ){
      printf(" %d\n " , *p ) ; // value
    }
    p=a;
    // p = &a[3];
    printf("************");    
    printf("%u\n",p); // address
    printf("%d\n",*p); // value
    p++;
    printf("************");
    printf("%u\n",p); // address
    printf("%d\n",*p); // value
	p--;
    printf("************");
    printf(" %u\n " , p ) ; // address
    printf(" %d\n " , *p ) ; // value
    p=p+2;//address +2  
    printf("************");
    printf("%u\n",p); // address
    printf("%d\n",*p) ; // value  
    p=p-2;//address -2
	printf("************");
    printf("%u\n",p); // address
	printf("%d\n",*p); // value
  
   }


   /*
   -------------------------------------------------------------------


    POINTOR  AIRTHMATICS
    --------------------

    float *p ;       // return address

    p = &a[3] = 112  ;  p++  -----> 116

    p = &a[3] = 112  ;  p--  -----> 108

    p = &a[3] = 112  ;  p + 2 ----->


    p + 2  ( constant addition


    p = &a[3] = 112  ;  p - 2 ----->


      p - 2  ( constant substraction )


----------------------------------------------------------------------------

    float *p ;       // return address

    p = &a[3] = 112  ;  p++  -----> 116

    p = &a[3] = 112  ;  p--  -----> 108

    p = &a[3] = 112  ;  p + 2 -----> 112 + 2 * 4 = 120


    p + 2  ( constant addition  )


    p = &a[3] = 112  ;  p - 2 -----> 112 - 2 * 4 = 104


      p - 2  ( constant substraction )


   --------------------------------------------------------------------

    p = &a[3] = 112

    q = &a[6] = 124


    q - p  =  return int value

     = 124 - 112  = 12  byte


    difference = 12 / 4 ( SIZE OF THE DATA TYPE )

      = 3 LOCATION

  --------------------------------------------------------------------
  /*






*/
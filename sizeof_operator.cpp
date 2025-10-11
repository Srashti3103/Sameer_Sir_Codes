// sizeof() operator

      // FIND SIZE OF THE DATA TYPE

// 12--->int
// 3.454--->double
// 3.456f --->float

#include<stdio.h>

   int  main()
   {

        printf(" sizeof integer = %d \n" , sizeof(int)  );   //  4

        printf(" sizeof float   = %d \n" , sizeof(float));  //  4

        printf(" sizeof char    = %d \n" , sizeof(char) ); //  1


printf(" sizeof  integer  constant   = %d \n" , sizeof(12));   //  4

printf(" sizeof  double    constant   = %d \n" , sizeof(3.456));  // 8

printf(" sizeof  float    constant   = %d \n" , sizeof(3.456f)); // 4

printf(" sizeof  char     constant   = %d \n" , sizeof('A'));  // 1

   }


 /*
 -------------------------------------------------------------------


    sizeof()  :-   find size of the data.


     syntax

    1.    sizeof( data type );

    2.    sizeof( variable );

    3.    sizeof( constant );

 ------------------------------------------------------------------

   1.


    printf(" sizeof integer = %d \n" , sizeof(int)  );     // 2

    printf(" sizeof float   = %d \n" , sizeof(float));    //  4

    printf(" sizeof char    = %d \n" , sizeof(char) );   //   1


   -------------------------------------------------------------------




   2.

    int   a;   float b;    char  c;


    printf(" sizeof   integer = %d \n " , sizeof(a));     // 2

    printf(" sizeof   float   = %d \n " , sizeof(b));    //  4

    printf(" sizeof   char    = %d \n " , sizeof(c));   //   1

   -------------------------------------------------------------------
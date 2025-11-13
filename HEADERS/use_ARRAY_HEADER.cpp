// INPUT AND PRINT N NOS USING FUNCTION
#include "ARRAY.h"
int  main(){
int a[10],n,b;
printf("ENTER SIZE \n");
scanf("%d",&n);
printf("ENTER NO\n");
inputarray (a,n);
printf("NUMBERS=\n");
printarray(a,n);
b =arraybiggest(a,n);
printf("biggest no =%d\n",b);
}
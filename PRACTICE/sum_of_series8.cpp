//1 - (x^1)/1! + (x^2)/2! - (x^3)/3! +
//sum of series
#include<stdio.h> 
#include<math.h> 
int main() 
{ 
int i , size ,num, fac = 1; 
float sum = 1 ; 
printf(" ENTER num AND size \n "); 
scanf("%d%d" , &num , &size); 
for( i = 1 ; i <= size ; i++ ) 
{ 
 
fac = fac * i ; // factorial 
sum = sum + pow(-1,i)* pow(num,i)/fac ; 
} 
 
printf("ans = %f\n" , sum ); 
} 
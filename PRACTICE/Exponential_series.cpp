//1 + (x^1)/1! + (x^2)/2! +(x^3)/3! +  (x^4)/4! + .....
//EXPONENTIAL SERIES
#include<stdio.h> 
#include<math.h> 
int main() 
{ 
 
int num , size , i , fac = 1; 
float sum= 1; 
printf(" ENTER num AND size \n "); 
scanf("%d%d",&num,&size); 
for( i = 1 ; i <= size ; i++) 
{ 
 
fac = fac * i ; // fact. 
sum = sum + pow(num,i)/ fac ; 
} 
 
printf("ANS = %f\n" , sum);
}
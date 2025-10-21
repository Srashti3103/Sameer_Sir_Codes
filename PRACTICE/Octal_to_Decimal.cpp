//octal to decimal conversion 
#include<stdio.h>
#include<math.h>
int main()
{
    //declare variable
    long long octal;
    int decimal=0,i=0,rem;
    printf("Enter an octal number ");
    scanf("%lld",&octal);
    //loop to convert octal to decimal
    while(octal!=0){
        rem=octal%10;
        decimal=decimal+rem*pow(8,i);
        i++;
        octal=octal/10;
    }
    //print th decimal number
    printf("Decimal number is %d",decimal);
    return 0;
}
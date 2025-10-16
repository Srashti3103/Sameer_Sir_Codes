//binary to decimal ci=onversion
#include<stdio.h>
#include<math.h>
int main()
{
    //declare variable 
    long long binary;
    int decimal=0, i=0, rem;
    printf("Enter a binary number ");
    scanf("%lld",&binary);
    //loop to convert binary to declare 
    while(binary!=0)
    {
        rem=binary%10;
        decimal=decimal+rem*pow(2,i); 
        i++;
        binary=binary/10;
    }
    //print the dedcimal number 
    printf("Decimal number is %d",decimal);
    return 0;
    
}
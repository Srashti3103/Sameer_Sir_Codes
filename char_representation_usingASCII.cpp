// WAP FOR CHECK INPUT CHARACTER IS CAPITAL LETTER ,SMALL 
//LETTER,DIGIT ,SPECIAL SYMBOLS USING ASCII VALUE 
#include<stdio.h> 
int main() 
{ 
 char ch; 
 printf(" ENTER CHARACTER \n "); 
 scanf("%c",&ch); 
 if ( ch >= 65 && ch <= 90) 
{
 printf(" CAPITAL LETTERS \n "); 
} 
else if( ch >= 97 && ch <=122) 
{
 printf(" SMALL LETTERS \n "); 
} 
else if( ch >= 48 && ch <= 57) 
{ 
printf(" DIGITS \n "); 
} 
else if(ch == 32 ) 
{
 printf(" SPACE \n "); 
} 
else 
{ 
printf(" SPECIAL SYMBOLS\n");

}}
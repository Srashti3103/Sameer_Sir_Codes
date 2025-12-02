//NO ARGUMENT BUT RETURN VALUE 
//EXPONENTIAL SERIES
#include <stdio.h>
int Exp() {
    int x,n,i;
    float val=1,sum=1;
    printf("Enter the value of x: ");
    scanf("%d",&x);//input
    printf("Enter number of terms: ");
    scanf("%d",&n);//input
    printf("Exponential SERIES :\n ");
	//calculation
    for(i=1;i<=n;i++){
        val=val*x/i;
        printf("+%.2f",val);
       }  
       return val;	
}
int main(){
	printf("%d",Exp());//calling function //print
}

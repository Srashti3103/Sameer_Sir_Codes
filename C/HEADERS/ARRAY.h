#include<stdio.h>
void inputarray ( int a[10],int n ){
   int i;
   for (i=0;i<n;i++){
       scanf("%d",&a[i]);
   }
}
void printarray(int a[10],int n){
	int i;
	for (i=0;i<n;i++){
       printf("%d\n",a[i]);
	}
 }
int arraybiggest(int a[10],int n){
	int i,b;
	b= a[0];
	for (i=0;i<n;i++){
      if(b<a[i])
        b = a[i];
    }
    return(b);
    }
	int arraysmallest(int a[10],int n)
    {
	int i,s;
	s= a[0];
	for (  i = 0 ; i < n ; i++ )
	{
      if(s>a[i])
	  s = a[i];
    }
    return(s);
    }
	void  bubblesort(int a[10] ,int n){
	int i,j,t;
	for(i=0;i<n-1;i++){
      for(j=0;j<n-i-1;j++){
      if(a[j]>a[j+1]){
          t=a[j];   
		  a[j]=a[j+1];
		  a[j+1]=t;
		}	
	}
}
}
void linearsearch(int a[10],int n,int x)
{
            int i,t=0;
            for(i=0;i<n;i++){
                 if(a[i]==x){
               t=i+1 ;
			    break;
           }

         } 
   }
void inputmatrix(int a[10][10],int m,int n)
{
int i,j;
   for(i=0;i<m;i++){
      for ( j = 0 ; j < n ; j++ ){
      scanf("%d", &a[i][j]);
	  }
   }
 }
void printmatrix(int a[10][10],int m,int n ){
int  i,j;
for (i=0;i<m;i++){
for (j=0;j<n;j++){
      printf("%4d", a[i][j]);
	  }
      printf("\n");
   }
 }
void addmatrix(int a[10][10],int b[10][10],int m,int n){
int i,j,c[10][10];
for(i=0;i<m;i++){
     for(j=0;j<n;j++){
	 c[i][j] = a[i][j] + b[i][j] ;
	 }
	 }
	 printmatrix ( c , m , n );
	 }
void  mulmatrix ( int a[10][10] ,int b[10][10] ,int m , int n, int p , int q ){
int  i,j,k,c[10][10];
if(n!=p){
printf(" MULTIPLICATION IS NOT POSSIBLE ");
}else{
for(i=0;i<m;i++){
      for(j=0;j<q;j++){
      c[i][j] = 0 ;
       for(k=0;k<n;k++){
	   c[i][j] =c[i][j]+a[i][k]*b[k][j];
	   }
	   }
	   }
	   printmatrix(c,m,q);
    }
  }
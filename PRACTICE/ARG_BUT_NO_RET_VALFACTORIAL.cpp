 //ARGUMENT BUT NO RETURN VALUE 
 //FACTORIAL OF A NUMBER 
 #include<stdio.h>
 void fact(int p);
    int main(){
       int  n;  
       printf(" ENTER NUMBER \n ");  
       scanf("%d", &n);  
       fact( n );  
    }    
    void fact(int p){ 
      int i,f=1; 
      for(i=1;i<=p;i++){  
         f=f*i;  
      }  
      printf(" FACT = %d\n ",f); 
  }
//FIND MAX NUMBER USING FUNCTION OVERLOADING 
#include<iostream>
using namespace std;
int max(int a,int b){
	if(a>b){
		return a;
	}else{
		return b;
	}
}
float max(float a,float b){
	return((a>b)?a:b);
}
char max(char a,char b){
	return((a>b)?a:b);
}
int main(){
	cout<<max(3,5)<<endl;
	cout<<max(4.3f,2.7f)<<endl;
	cout<<max('A','a')<<endl;
}
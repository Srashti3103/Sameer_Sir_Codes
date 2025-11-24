//::(SCOPE RESOLUTION OPERATOR)
#include<iostream>
using namespace std;
int a=3;//global
int main(){
	int a=5;//local
	cout<<a<<endl;
	cout<<::a<<endl;
	{
		int a=7;//local
		cout<<a<<endl;
		cout<<::a<<endl;
	} 
}
//DECLARATION AND INTIALIZATION OF REFERENCE VARIABLE
#include<iostream>
using namespace std;
int main(){
	int a=5;
	int &b=a;//declaratiom and intialization
	cout<<"ADDRESS OF a ="<<&a<<endl;
	cout<<"ADDRESS OF b ="<<&b<<endl;
	b=3;
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	
}
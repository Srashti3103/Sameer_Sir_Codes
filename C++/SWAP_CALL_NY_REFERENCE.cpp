//To swap two number using reference variable
#include<iostream>
using namespace std;
void swap(int &p,int &q);
int main(){
	int a=5,b=2;
	swap(a,b);
	cout<<"a="<<a<<endl;
	cout<<"b="<<a<<endl;
}
void swap(int &p,int &q){
	int c;
	c=p;
	p=q;
	q=c;
}
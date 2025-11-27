//INPUT AND PRINT NUMBER USING CLASS AND OBJECT
#include<iostream>
using namespace std;
class test{
	private : int a;
	public : void get(){
		cout<<"ENTER NO "<<endl;
		cin >>a;
	}
	void out(){
		cout<<"a = "<<a<<endl;
	}
};
int main(){
	test p;
	p.get();
	p.out();
}
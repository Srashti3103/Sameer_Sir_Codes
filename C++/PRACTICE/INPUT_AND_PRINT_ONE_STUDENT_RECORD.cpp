//INPUT AND PRINT ONE STUDENT RECORD 
#include<iostream>
using namespace std;
class student{
	private: char name[10];
			 int rollno;
	public: void get(){
		cout<<"ENTER NAME AND ROLL OF STUDENT "<<endl;
		cin>>name>>rollno;
	}
	void out(){
		cout<<"name ="<<name<<endl;
		cout<<"roll ="<<rollno<<endl;
	}
};
int main(){
	student p;
	p.get();
	p.out();
	cout<<"SIZE OF OBJECT "<<sizeof(student)<<endl;
}

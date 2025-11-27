//ADDITION OF TWO TIMES
#include<iostream>
using namespace std;
class time
{
	private: int h,m;
	public:void get(){
		cout<<"ENTER h AND m"<<endl;
		cin>>h>>m;
	}
	void out(){
		cout<<h<<":"<<m<<endl;
	}
	void sum(time x,time y)
	{
		m=(x.m+y.m)%60;
		h=x.h+y.h+(x.m+y.m);
	}
};
int main(){
	time p,q,t;
	p.get();
	q.get();
	t.sum(p,q);
	p.out();
	q.out();
}
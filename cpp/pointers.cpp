#include<iostream>
using namespace std;

main()
{
	int p=5;
	int *p1;
	p1=&p;
	
	cout<<"p="<<p<<endl;
	cout<<"&p="<<&p<<endl;
	cout<<"p1="<<p1<<endl;
	cout<<"*p1="<<*p1<<endl;
	cout<<"&p1="<<&p1<<endl;
}

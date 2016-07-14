#include<iostream>
using namespace std;
int paul();
int ppp=69;//global
main()
{
	int ppp=45;//local
	cout<<ppp<<endl;//prefer local
	cout<<::ppp<<endl;//prefer global
	cout<<paul()<<endl;
}

int paul()
{
	return ppp;
}

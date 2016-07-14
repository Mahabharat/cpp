#include<iostream>
using namespace std;

int factorial(int x)
{
	if(x==1)
		return 1;
	else
		return x*factorial(x-1);
}
main()
{
	int no;
	cin>>no;
	cout<<"factorial of "<<no<<" is:"<<factorial(no)<<endl;
}

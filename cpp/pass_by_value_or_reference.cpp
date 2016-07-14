#include<iostream>
using namespace std;

void passbyvalue(int x);
void passbyreference(int *y);

main()
{
	int Mango=5;
	int Orange=6;
	
	passbyvalue(Mango);//we pass a copy of the value, it doesn,t change the value of it
	passbyreference(&Orange);//we pass the address of the value, it change the value of it
	
	cout<<"The value of Mango now="<<Mango<<endl;
	cout<<"The value of Orange now="<<Orange<<endl;
}

void passbyvalue(int x)
{
	x=99;//it needs return
}

void passbyreference(int *y)
{
	*y=99;//it doesn,t need return
}

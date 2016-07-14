#include<iostream>
using namespace std;

void disp(int x)
{
	cout<<"Print a integer "<<x<<endl;//function overloading: different function with same name but having different parameters
}
void disp(float x)
{
	cout<<"Print a float "<<x<<endl;
}
main()
{
	int a=10;
	float b=23.20;
	disp(a);
	disp(b);
}

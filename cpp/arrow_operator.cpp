#include<iostream>
using namespace std;

class sally
{
	public:
	void disp()
	{
		cout<<"What's up guys?"<<endl;
	}
};
main()
{
	sally object;
	sally *pointer=&object;
	
	object.disp();
	pointer->disp();
}
	

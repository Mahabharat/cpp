#include<iostream>
using namespace std;

class base
{
	public:
		base()//constructor and deconstructor does not inherit
		{
			cout<<"I am the mother constructor"<<endl;
		}
		
		~base()
		{
			cout<<"I am the mother deconstructor"<<endl;
		}
};

class derived:public base
{
	public:
		derived()
		{
			cout<<"I am the derived constructor\n";
		}
		~derived();
};

derived::~derived()
{
	cout<<"I am the base destructor\n";
}

main()
{
	derived obj;//daughter's obj first call parent's constructor
}

//abstract class is a class which have at least one pure virtual function, it has no object, it has pointers
//pure virtuaal function is a virtual function with no body

#include<iostream>
using namespace std;

class Base
{
	public:
		virtual void disp()
		{
			cout<<"base virtual class\n";
		}
		virtual void attack()=0;		//pure virtual class
};

class derived:public Base
{
	public:
		//void disp()
		//{
		//	cout<<"derived virtual class\n";
		//}
		
		void attack()
		{
			cout<<"derived pure virtual class\n";
		}
};

main()
{
	derived obj;
	Base *p=&obj;
	p->disp();					//derived virtual func overwrite the inherited one
	p->attack();					//derived pure virtual func can't overwrite the inheried one
}

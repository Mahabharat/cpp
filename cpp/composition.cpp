#include<iostream>
#include<string>
using namespace std;

class DOB
{
	private:
		int day;
		int month;
		int year;
	public:
		DOB(int a, int b, int c)
		{
			day=a;
			month=b;
			year=c;
		}
		void disp()
		{
			cout<<day<<"/"<<month<<"/"<<year<<endl;
		}
};

class Name
{
	private:
		string name;
		DOB obj2;//declare object of a class in another class=composition 
	public:
		Name(string x, DOB y):name(x), obj2(y)//need member initializer
		{
		}
		void print()
		{
			cout<<name<<" was born on ";
			obj2.disp();
		}
};

main()
{
	DOB obj1(02,06,1996);
	Name obj3("Partha", obj1);
	obj3.print();
}

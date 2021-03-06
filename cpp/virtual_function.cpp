//it is a part of polymorphism
#include<iostream>
using namespace std;

class Enemy
{
	public:
		void attack1()
		{
			cout<<"Enemy attack1\n";
		}
		virtual void attack()
		{
			cout<<"virtual enemy attack\n";
		}
};

class Ninja:public Enemy
{
	public:
		void attack1()
		{
			cout<<"Ninja attack1\n";
		}
		void attack()
		{
			cout<<"virtual Ninja attack\n";
		}
};

class Monster:public Enemy
{
	public:
		void attack1()
		{
			cout<<"Monster attack1\n";
		}
		void attack()
		{
			cout<<"virtual Monster attack\n";
		}
};

main()
{
	Ninja n;
	Monster m;
	Enemy e;
	Enemy *p=&e;
	p->attack1();
	p->attack();
	
	p=&n;
	p->attack1();		//inherited base function
	((Ninja*)p)->attack1(); //derived function
	p->attack();		//derived virtual function
	
	p=&m;
	p->attack1();		//inherited base function
	((Monster*)p)->attack1(); //derived function
	p->attack();		//derived virtual function
}
	

	

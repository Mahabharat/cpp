//in polymorphism same functions hava different results
#include<iostream>
using namespace std;

class Shaitan
{
	protected:
		int power;
	public:
		void attackPower(int a)
		{
			power=a;
			
		}
};

class Jargam:public Shaitan
{
	public:
		void attack()
		{
			cout<<"wants to kill hatim with attackpower="<<power<<endl;
		}
};

class Laka:public Shaitan
{
	public:
		void attack()
		{
			cout<<"works as a gulam for Jargam with attackpower="<<power<<endl;
		}
};

main()
{
	Jargam obj1;
	Laka obj2;
	//1.
	//obj1.attackPower(7);			//inherited attackpower
	//obj1.attack();
	//obj2.attackPower(3);
	//obj2.attack();			//similar obj2

	//2.
	//Shaitan *p1=&obj1;
	//p1->attackPower(7);
	//obj1.attack();			//similar obj2

	//3.
	Shaitan *p1=&obj1;
	p1->attackPower(7);
	((Jargam*)p1)->attack();
	
	
	Shaitan *p2=&obj2;
	p2->attackPower(3);
	obj2.attack();
}

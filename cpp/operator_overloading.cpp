#include<iostream>
using namespace std;

class sally
{
	public:
		int num;
		sally()
		{
		}
		sally(int a);
		sally operator-(sally);
};

sally::sally(int a)
{
	num=a;
}

sally sally::operator-(sally obj2)
{
	sally obj;
	obj.num=num-obj2.num;
	return obj;
}

main()
{
	sally obj1(55);
	sally obj2(45);
	sally obj3;
	obj3=obj1-obj2;
	
	cout<<"obj1.num="<<obj1.num<<endl;
	cout<<"obj2.num="<<obj2.num<<endl;
	cout<<"obj2.num="<<obj3.num<<endl;
}

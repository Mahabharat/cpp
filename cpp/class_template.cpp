#include<iostream>
using namespace std;

template<class A,class B>

class OM
{
	private:
		A a;
		B b;
	public:
		OM(A x, B y)
		{
			a=x;
			b=y;
		}
		B bigger();
};

template<class A,class B>
B OM<A,B>::bigger()
{
	return(a>b?a:b);
}		

main()
{
	OM <float,int> obj(99.9,89);
	cout<<obj.bigger()<<endl;
}

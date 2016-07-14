#include<iostream>
using namespace std;

template<class A, class B>//if two data type is used, then two template is taken
//template<class A>
//A add(A a,A b)
B add(A a, B b)
{
	return (a+b);
}
main()
{
	int a=77;
	//int b=98;
	double b=68.90;
	cout<<add(a,b)<<endl;
}

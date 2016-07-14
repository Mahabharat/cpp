#include<iostream>
using namespace std;

template<class A>

class Test
{
	public:
		Test(A x)
		{
			cout<<x<<" is not a character\n";
		}
};

template<>
class Test<char>
{
	public:
		Test(char x)
		{
			cout<<x<<" is  a character\n";
		}
};	

main()
{
	Test<int> obj1(4);
	Test<float> obj2(4.5);
	Test<char> obj3('a');
}

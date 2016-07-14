#include<iostream>
using namespace std;
class Partha
{
	public:
		int add(int x, int y)
		{
			int sum=x+y;
			return sum;
		}
};
int main()
{
	Partha Paul;
	cout<<"The sum is="<<Paul.add(10, 20)<<endl;
	
}
	

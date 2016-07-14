#include<iostream>
#include<string>
using namespace std;
class Bheem
{
	private:
		string name;
	public:
		Bheem(string z)
		{
			name=z;
		}
		string disp()
		{
			return name;
		}
};
main()
{
	Bheem bo("Arjun");
	cout<<bo.disp()<<endl;
	Bheem bo2("Partha");
	cout<<bo2.disp()<<endl;

}

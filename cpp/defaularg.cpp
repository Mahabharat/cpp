#include<iostream>

using namespace std;

int volume(int l=1, int b=1, int h=1);
main()
{
	cout<<"Volume is::"<<volume(5,8)<<endl;
}

int volume(int l, int b, int h)
{
	int volume=l*b*h;
	return volume;
}

#include<iostream>
#include<fstream>
using namespace std;

main()
{
	ofstream object("");		//short form of object.open("")
	if(object.is_open())
	{
		cout<<"file is opened\n";
	}
	else
	{
		cout<<"file is not opened\n";
	}
	object<<"I love my India";
	object.close();
}

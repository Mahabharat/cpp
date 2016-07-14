#include<iostream>
#include<fstream>
using namespace std;

main()
{
	ifstream object("list.txt");		//it works as deconstructor, no need of object.close()
	
	int ID;
	string name;
	double dollars;
	
	while(object>>ID>>name>>dollars)	//it stops automatically, no need of feof 
	{
		cout<<ID<<' '<<name<<' '<<dollars<<endl;
	}
}

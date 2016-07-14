//it is the process of error handling
#include<iostream>
using namespace std;

main()
{
	try
	{
		int momsage=20;
		int sonsage=39;
		
		if(sonsage>momsage)
		{
			throw 99;
		}
	}
	
	catch(int x)
	{
		cout<<"Error "<<x<<endl;
	}
}
		
		

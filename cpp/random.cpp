#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
main()
{
	//srand(21);//srand(any numbers)
	srand(time(0));
	for(int i=0;i<10;i++)
	{
		//cout<<(rand()%6)<<endl;//if we need numbers between 0 to 5
		cout<<1+(rand()%6)<<endl;//if we need numbers between 1 to 6
	}
}

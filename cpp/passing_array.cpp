#include<iostream>
using namespace std;

void printarray(int array[], int sizeofarray);

main()
{
	int bucky[5]={44,89,67,45,96};
	int tuna[3]={67,88,46};
	printarray(tuna, 3);
}

void printarray(int array[], int sizeofarray)
{
	for(int i=0;i<sizeofarray;i++)
	{
		cout<<array[i]<<endl;
	}
}	

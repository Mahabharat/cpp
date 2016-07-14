#include<iostream>
using namespace std;

main()
{
	int c;
	cout<<"size of integer variable:"<<sizeof(int)<<endl;
	
	char a;
	cout<<"size of character variable:"<<sizeof(a)<<endl;
	
	double b;
	cout<<"size of double variable:"<<sizeof(b)<<endl;
	
	double array[10];
	cout<<"Size of double array:"<<sizeof(array)<<endl;
	cout<<"length of array:"<<sizeof(array)/sizeof(array[0])<<endl;
	
	cout<<sizeof(int)<<endl;
}

#include<iostream>
using namespace std;
int add(int a , int b) // declaration a funtion
{
	int add=a+b;
	return add;
}
int main()
{
	int c,d;
	cout<<"	Enter Two Numbers";
	cin>>c>>d;                                     
	cout<<"	The Sum Of Two Nums Is;"<<"\t"<<add(c,d);
}


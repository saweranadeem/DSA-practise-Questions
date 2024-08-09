#include<iostream>
using namespace std;
int sub(int ,int);
int main()
{
	int c,d;
	cout<<"	Enter Two Numbers";
	cin>>c>>d;
	cout<<"	The Sum Of Two Nums Is;"<<"\t"<<sub(c,d);
}
int add(int a , int b)
{
	int sub=a-b;
	return sub;
}


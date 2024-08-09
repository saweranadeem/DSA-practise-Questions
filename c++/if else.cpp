#include<iostream>
using namespace std;
int main()
{
	int a,b,ch,sum,sub,mult,div;
	cout<<"Enter Two Num";
	cin>>a>>b;
	cout<<"Enter Any Choice";
	cin>>ch;
	if(ch==1)
	{
		sum=a+b;
		cout<<sum;
	}
	else if(ch==2)
	{
		sub=a-b;
		cout<<sub;
	}
	else if(ch==3)
	{
		mult=a*b;
		cout<<mult;
	}
	else
	{
		div=a/b;
		cout<<div;
		
	}
}

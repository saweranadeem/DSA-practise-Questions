#include<iostream>
using namespace std;
int main()
{
	int arr[3][3],i,j;
	cout<<"Take elements From The User";
	for(int i=0;i<=2;i++)
	{
		for(int j=0;j<=2;j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"The Elements Are\n";
		for(int i=0;i<=2;i++)
	{
		for(int j=0;j<=2;j++)
		{
			cout<<arr[i][j]<<"\t";
		}
		cout<<"\n";
	}
}

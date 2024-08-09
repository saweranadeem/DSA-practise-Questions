#include<iostream>
using namespace std;
int main()
{
	int arr[3][2];
	cout<<"Enter Elements";
	for(int i=0;i<=2;i++)     // IT Shows the numbers OF Rows
	{
		for(int j=0;j<=1;j++) // IT Shows the numbers OF columns
		{
			cin>>arr[i][j];
		
		}
	}
		cout<<"The Elements Are\n";
	for(int i=0;i<=2;i++)
	{
		for(int j=0;j<=1;j++)
		{
			cout<<arr[i][j]<<"\t";	
		}
		 cout<<"\n";
	}
}

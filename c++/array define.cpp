#include<iostream>
using namespace std;
int main()
{
	int arr[5]; //declare an array
	cout<<"Enter 5 elements from the user";
	for(int i=0;i<=4;i++)
	{
		cin>>arr[i];     //values are declare from the user
		
	}
	cout<<"the elements in array are";   
		for(int i=0;i<=4;i++)
	{
		cout<<arr[i]<<"\t";  //print on the screen
	}
	
	//to call an array we use array name with[i] 
}

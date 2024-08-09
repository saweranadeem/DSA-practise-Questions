#include<iostream>
using namespace std;
int arr[5];  // define array
int top=-1; //   define top to check whether the stack is empty or not
void push() // Define a push function
{
	for(int i=0;i<=4;i++)
	{
	if(top==-1)
	{
		cout<<"Stack Is Empty\n";
	}
		top++;
		cout<<"Enter The Value In Stack\n";
		cin>>arr[top];

	
}
}
int main()
{
	push(); 
   cout<<"The Values In Stacks Are\n";
	for(int i=0;i<=4;i++)
	{
		cout<<arr[i]<<"\t";
}
 
}

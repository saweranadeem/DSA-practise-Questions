#include<iostream>
using namespace std;
int arr[5];        //implement stack using array  

int top=-1;           //stack is empty

isEmpty()           //use this function to check either the function is empty r not
{
if (top==-1)                //use if codition
{
	cout<<"The Stack Is Empty\n";
}

}
isFull()         //use this function to check either the function is full r not
{
	if (top>=5)
	{
		cout<<"Stack Is Full\n";
	}
}

void push(int val)      //use push function to enter the value in stack OR defination of function
{
     top++;               //we use increment operator in stack to enter the value from stack
     
    arr[top]=val;                //stack values is
}
void pop(int value)             //use pop function to delete the value in stack OR defination of function
{
	         
	cout<<"Dlete The Value From Stack\t"<<arr[top]<<"\n";   //  dleted stack value is  
	
	top--;  //we use decrement operator in stack to dlete the value from stack
	
}
void display()           //we use display function in stack to to show all the value in stack
{
	cout<<"The Values In Stacks Are\n";
	for(int i=top;i>=0;i--)    //using fo loop thats print all the values in stack
	
	cout<<arr[i]<<"\t";                //stack values are
	
}
int main()
{
	int ch,a,b;
	cout<<"***The Following manues are***\n";
	cout<<"1-for Push\n";
	cout<<"2-for pop\n";
	cout<<"3- for display\n";
	cout<<"4- for Exit\n";
	for(ch;ch<=4;ch++)           //using for loop which runs at the end of choice
	{
	
	cout<<"Enter Your Choice:";
	cin>>ch;
	switch(ch)                   //using switch statement

{
	
case 1:
	     push(a);
		cout<<"Enter The Value In Stack\t";
		cin>>a;
	        
break;
case 2:
 		
         pop(b);
 break;
case 3:
        display();
break;
case 4:
      exit(0);
 break;
 default:
 	cout<<"Wrong choice";
	}	
}
}

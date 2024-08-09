#include<iostream>
using namespace std;
int arr[5];
int top=-1;
void push(int value)
{
if (top==-1)
{
	cout<<"The Stack Is Empty\n";
}
else{

	top++;
	value=arr[top];
}
}
int pop()
{
	cout<<" The poped Value From Stack Is\t"<<arr[top]<<"\n";
	top--;
}
int display()
{
	
	cout<<"The Values In Stacks Are";
	for(int i=0;i<=top;i++)
	cout<<arr[i];
}
int main()

{
	int ch,a;
	cout<<"***The Following manues are\n";
	cout<<"1-for Push\n";
	cout<<"2-for pop\n";
	cout<<"3- for display\n";
	cout<<"4- for Exit\n";
	cout<<"Enter Your Choice";
	cin>>ch;
	switch(ch)
{
	
case 1:
	        push(a);
	       	cout<<"Enter The Value In Stack\n";
	       	cin>>a;
break;
case 2:
         pop();
 break;
case 3:
        display();
break;
case 4:
      exit(0);
 break;
	}	
	
}

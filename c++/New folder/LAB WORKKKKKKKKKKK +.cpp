#include<iostream>
#include<conio.h>
using namespace std;
int arr[100];    //define a stack if n=100
int top=-1;
int n=100;

int isEmpty() {            //using this function to check whether the stack is empty or not
	if (top==-1) {
		cout<<"Stack Is Empty\n";
	}
}
int isFull() {             //using this function to check whether the stack is empty or not
	if (top>=n) {
		cout<<"Stack Is Full";
	}
}
int push(int value) {        //using this function to Enter The Value In Stack
	
	if(top<=n-1) {
	    top++;
		arr[top]=value;
	}
}
void pop() {                  //using this function to pop  The Value from Stack
  cout<<"The poped value From stack is\t"<<arr[top]<<endl;
    top--;
}
void display() {             //using this function to display  The Value of Stack
	for(int i=0;i<=top;i++) {
		cout<<arr[i]<<"\t";
		cout<<"\n";
	}
}

int main() {
		
	int ch,a;
	cout<<"***The Following manues are***\n";
	cout<<"1-For Push\n";
	cout<<"2-For pop\n";
	cout<<"3- For Display\n";
	cout<<"4- For Exit\n";
	isEmpty();
	for(ch=0;ch<=4;ch++) {         //using for loop which runs at the end of choice 
	
		cout<<"Enter Your Choice:";
		cin>>ch;
		switch(ch) {                   //using switch statement
			case 1:
				
				cout<<"Enter The Value In Stack\t";
				cin>>a;
				push(a);             //call the pop function
				break;
			case 2:
			    pop();
				break;
			
			case 3:               //call the display function
				display();
				break; 
			case 4:
			    cout<<"Exit";
				break;
				
			default:
			 	cout<<"Wrong choice";
		}	
	}
	isFull();
	getch();
	
}

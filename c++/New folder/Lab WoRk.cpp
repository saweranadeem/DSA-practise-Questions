#include<iostream>
#include<conio.h>
using namespace std;
int arr[100];
int top=-1;
int n=100;

int isEmpty() {
	if (top==-1) {
		cout<<"Stack Is Empty";
	}
}
int isFull() {
	if (top>=n) {
		cout<<"Stack Is Full";
	}
}
int push(int value) {
	
	if(top<=n-1) {
//		cout << "I'm in IF CONDIOTION of PUSH";
	    top++;
		arr[top]=value;
//		cout<< "TOP is: " << top << " and arr[0] is: " << arr[top] << "\n";
	}
}
void pop() {
  cout<<"The value deleted From stack is\t"<<arr[top]<<endl;
    top--;
}
void display() {
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
	
	for(ch=0;ch<=4;ch++) {         //using for loop which runs at the end of choice 
	
		cout<<"Enter Your Choice:";
		cin>>ch;
		
		switch(ch) {                   //using switch statement
			case 1:
				
				cout<<"Enter The Value In Stack\t";
				cin>>a;
				push(a);
				break;
			case 2:
			    pop();
				break;
			
			case 3:
				display();
				break;
			case 4:
			    cout<<"exit";
				break;
				
			default:
			 	cout<<"Wrong choice";
		}	
	}
	getch();
}


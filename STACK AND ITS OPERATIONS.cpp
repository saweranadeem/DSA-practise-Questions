#include<iostream>
#include<conio.h>
using namespace std;
class Assign{     //define a class of name assign
	private:
	int arr[100];        //define a stack if n=100
	int n=100;
	public:
	int top=-1;
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
int push(int value) {        //using psuuh function to Enter The Value In Stack
	
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
};
int main(){
	Assign obj;     //make an obj of class
	int ch,a;
	cout<<"***The Following manues are***\n";
	cout<<"1-For Push\n";
	cout<<"2-For pop\n";
	cout<<"3- For Display\n";
	cout<<"4- For Exit\n";
	obj.isEmpty();  // function calling
	for(ch=0;ch<=4;ch++) {         //using for loop which runs at the end of choice 
	
		cout<<"Enter Your Choice:";
		cin>>ch;
		switch(ch) {                   //using switch statement
			case 1:
				
				cout<<"Enter The Value In Stack\t";
				cin>>a;
				obj.push(a);             //call the push function with obj
				break;
			case 2:
			    obj.pop(); //call the pop function with obj
				break;
			
			case 3:               //call the display function with obj
				obj.display();
				break; 
			case 4:
			    cout<<"Exit";
				break;
				
			default:
			 	cout<<"Wrong choice";
		}	
	}
	obj.isFull();
	getch();
	
}



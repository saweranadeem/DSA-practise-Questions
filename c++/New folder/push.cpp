#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
char stack[100];
int n=100;
int top=-1;
int isEmpty(){    //using this function to check whether the stack is empty or not
	if(top==-1){
		cout<<"The Stack Is Empty";
	}
}
int isFull(){       //using this function to check whether the stack is full or not
	if(top>=n){
		cout<<"The Stack Is Full";
	}
}
int push(char val){    //using this function to enter the value in stack
	if(top<=n-1){
	top++;
	stack[top]=val;
	}
}
int pop(){                  //using this function to reverse  The Value of Stack
  cout<<stack[top]<<endl;
   top--;
    
}
int main(){
	isEmpty();      //calling the empty function
	char chr;
	cout<<"The characters In Arrays Are";
	for(int i=0;i<=6;i++){
		cin>>stack[i];
	}
	push(chr);       //calling the push function
	cout<<"The Characters In Reverse Orders Are\n";
		for(int i=0;i<=6;i++){
			cout<<stack[i];	
	
}
pop();	     //calling the pop function
	
	getch();
}


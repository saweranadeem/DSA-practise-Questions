#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
int stack[7];
int top=-1;
int n=7;
int isEmpty(){             //we use this Function to check either the stack is empty or not
	if(top==-1){
		cout<<"The Stack Is Empty";
	}
}
int isFull(){       //we use this Function to check either the stack is full or not
	if (top>=n){
		cout<<"The Stack Is Full";
	}
}
int push(char val){
	if(top<=n-1){
	top++;
	stack[top]=val;
	
	
    }
}
int pop(){
	cout<<"Reverse Values In Arrays Are:/t"<<stack[top];
	top--;
}
int main()
{
	isEmpty();
	char chr;
    getch();
}

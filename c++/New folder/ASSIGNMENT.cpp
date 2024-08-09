#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
char stack[8];
int top=-1;
int n=8;
int isEmpty(){
	if(top==-1)
	{
		cout<<"The Stack Is Empty\n";
	}
}
int isFull(){
	if(top>=n)
	{
		cout<<"The Stack Is Full";
	}
}
int push(char value){
	if(top<=n-1){
	top++;
	stack[top]=value;
}int top=-1;
}

int main(){
char chr;
     isEmpty();
	cout<<"The Stack Values Are";
	for(int i=0;i<=6;i++){
    cin>>stack[top];
					}
					push(chr);	}


    

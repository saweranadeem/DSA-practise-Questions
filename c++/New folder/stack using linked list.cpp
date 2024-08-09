#include<iostream>
#include<conio.h>
using namespace std;
struct node{
	int data;
	node*next;
};
struct node*top=NULL;
int peek(){
	return top->data;
}
void IsEmpty(){
	top=new node;
	if(top==NULL){
		cout<<"The List Is Empty";
	}
}
void IsFull(){
	if (top!=NULL){
			cout<<"The List Is Full";
		}
}
//stack follow the rule of FIFO
void push(){  //Push The Node AT the Head/Top In The List
    int data;
	node*temp;
	temp=new node;
	cout<<"Insert The Data At The Head In The List::\t";
	cin>>data;
	temp->data=data;
	temp->next=top;
	top=temp;
}
void pop(){ //pop the node at the Head/top in list
	node*temp;
	temp=new node;
	if(temp->next=NULL){
		cout<<"The List Is Empty";
	}
	temp=top;
	top=top->next;
	cout<<"The Node Is Deleted From The Head In The List::\n";
	
}
void printstack()
{
    node* temp;
  
    // List is empty
    if (top == NULL)
        cout<<"List is empty\n";
  
    // Else print the Linklist
    else {
        temp = top;
        cout<<"Display the Data ";
        while (temp != NULL)
		   {
		   	cout<<temp->data<<" -> ";
            temp = temp->next;
        }
       
    }
}
int main(){    
	int choice;
	cout<<"***The Following manues are***\n";
	cout<<"1-For Push\n";
	cout<<"2-For pop\n";
	cout<<"3- For Display\n";
	cout<<"4-For Top Value\n";
	cout<<"5- For Exit\n";
	IsEmpty();  // function calling
	for(choice=0;choice<=5;choice++) {         //using for loop which runs at the end of choice 
	
		cout<<"Enter Your Choice:";
		cin>>choice;
		switch(choice) {                   //using switch statement
			case 1:
				push();             //call the push function with obj
				break;
			case 2:
			    pop(); //call the pop function with obj
				break;
			case 3:               //call the display function with obj
				printstack();
				break; 
			case 4:
				cout<<"The Element Is\n"<<peek();
				break;
			case 5:
			    cout<<"Exit";
				break;
				default:
			 	cout<<"Wrong choice";
		}	
	}
	IsFull();
	getch();
	
}



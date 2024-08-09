//IN STACK 
//Push Is Done From The Head
//Dequeue Is Done From Head#include<iostream>
using namespace std;
struct node{
	int data;
	node*next;
};
struct node*top=NULL;

void IsEmpty(){   //function to check whether the stack is empty or not
	if(top==NULL){
		cout<<"The Stack Is Empty";
}
}
void IsFull(){ //function to check whether the stack is full or not
	if(top!=NULL){
		cout<<"The Stack  Is Full ";
	}
}
void push(){   //function to insert the value in stack
		int data;
	node*temp;  //New Node
	temp=new node;
	cout<<"Insert The Data In The Stack::\t";
	cin>>data;
	temp->data=data;
	temp->next=top;
	top=temp;
}
void pop(){      //function to delete the value from stack
		node*temp;
	temp=new node;
	if(top==NULL){
		cout<<"The Stack Is Empty";
	}
	else{
	
	temp=top;
	top=top->next;
	cout<<"The Node Is Deleted From  The Stack\n";
}
}
printstack(){    //function to print the value of stack

    node* temp;
  
    // List is empty
    if (top == NULL)
        cout<<"Stack is empty\n";
  
    // Else print the Linklist
    else {
        temp = top;
        cout<<"Display the Data\n ";
        while (temp != NULL)
		   {
		   	cout<<temp->data<<" -> ";
            temp = temp->next;
        }
       
    }

}
int peek()
{
	return top->data;
}
int size()    //Function to find the size
{
	if(top==NULL)
	cout<<"The Stack is empty ";
	else
	{
		int length=0;
		while(top!=NULL)
		{
			top=top->next;
			length++;
		}
		return length;
		cout<<endl;
		
	}
}
int main(){
	int choice;
	// create menu to make choices by using switch statement
	cout<<"** Stack Menu **"<<endl;
	cout<<" 1)   For isEmpty \n ";
	cout<<"2)    For isFull \n";
	cout<<"3)    For push \n ";
	cout<< "4)   For Pop  \n";
	cout<<"5)    For  Print stack \n ";
	cout<<"6)    For  Peek \n ";
	cout<<"7)    For  Size \n ";
    cout<<"8)   For  Exit \n ";
    for(int choice=0;choice<=8;choice++){
	cout<<"\nEnter any Choice: ";
	cin>>choice;
	switch(choice){
	    case 1:
		   IsEmpty();         
	       break;
	    case 2:
	       IsFull();            
	       break;
	    case 3:
	      push();
	       break;
	    case 4:
	         pop();
	        break;
	    case 5:
        	printstack();
	        break;
	    case 6:
	        cout<<"\nThe Top element is "<<peek();
	       break;
	    case 7:
	        cout<<"\nThe Size is "<<size();
	    break;
	    case 8:
	        cout<<"\nExit";
	    break;
       default:
	        cout<<"Wrong Choice";
   }
}
}

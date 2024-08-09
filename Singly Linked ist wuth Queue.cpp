//IN Queue 
//EnQueue Is Done From The Tail     
//Dequeue Is Done From Head       here, same as singly linked list but head=front
#include<iostream>
using namespace std;
struct node{
	int data;
	node*next;
};
struct node*front=NULL;
struct node*rear==NULL;
void IsEmpty(){   //Function To Check The Queue Is Empty Or Not
	if(front==NULL){
		cout<<"The Queue Is Empty";
	}
}
void IsFull(){           //Function To Check The Queue Is Full Or Not
	if(front!=NULL){
		cout<<"The Queue Is Full";
	}
}
void enqueue(){    //Function to insert the Node In Queue
	int data;
	node*temp,*traverse;
	temp=new node;
	traverse= new node;
	cout<<"Insert The Data  In The Queue::\t ";
	cin>>data;
	cout<<"\n";
	temp->next=NULL;
	temp->data=data;
	 if(front==NULL)
   {
   	front=rear=temp;
	}
	else
	{
		rear->next=temp;
		rear=temp;
	}
}

void dequeue(){        //Function to Remove the Node In Queue
	node*temp;
	//temp=new node;
	if(front=NULL){
		cout<<"The List Is Empty";
	}
	else{
	temp=front;
	front=front->next;
	cout<<"The Node Is Deleted From The Head In The List\n";
}
}

void printqueue(){

    node* temp;
  
    // List is empty
    if (front == NULL)
        cout<<"Queue is empty\n";
  
    // Else print the Linklist
    else {
        temp = front;
        cout<<"Display the Data\n ";
        while (temp != NULL)
		   {
		   	cout<<temp->data<<" -> ";
            temp = temp->next;
        }
       
    }
 }
int peek(){
	return front->data;
}
int size()    //Function to find the size
{
	if(front==NULL)
	cout<<"The Queue is empty ";
	else
	{
		int length=0;
		while(front!=NULL)
		{
			front=front->next;
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
	cout<<"3)    For enqueue \n ";
	cout<< "4)   For Dequeue  \n";
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
	      enqueue();
	       break;
	    case 4:
	         dequeue();
	        break;
	    case 5:
        	printqueue();
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


#include<iostream>
using namespace std;
struct node{
	int data;
	node*next;
	node*prev;
};
struct node*head=NULL;
void insert_at_head(){
	int data;
    node*temp;
    temp=new node;
    cout<<"Enter the Data At Head in the List:: ";
    cin>>data;
   temp->data=data;
   temp->next=head;
   //temp->prev=NULL;
   if (head!=NULL){
   
   head->prev=temp;}
   head=temp;
}
void insert_at_position(){
	int i,loc,data;
	node*temp,*traverse;
	temp=new node;
	cout<<"Enter The location where the data to be inserted:: ";
	cin>>loc;
	cout<<"Insert The Data At Specific Position:: ";
	cin>>data;
	cout<<"\n";
	traverse=head;
	temp->data=data;
	for(int i=0;i<loc;i++){
		traverse=traverse->next;
	}
	
     temp->next=traverse->next;
      traverse->next=temp;
      temp->prev=traverse;
      if(temp->next!=NULL){
	  
    traverse->next->prev=temp;

}
}
void insert_at_tail(){ 
	int data;
	node*temp,*traverse;
	temp=new node;
	traverse=head;
	cout<<"Enter the Data at the tail in the List:: ";
    cin>>data;
     temp->data=data;
     temp->next=NULL;
    
    while(traverse->next!=NULL){
    	traverse=traverse->next;
	}
    traverse->next=temp;
    temp->prev=traverse;
}

void delete_from_head(){
	node*temp;
	temp=new node;
	if(temp->next=NULL){
		cout<<"The List Is Empty";
	}
	temp=head;
	head->next->prev=0;
	head=head->next;
	//head->next->prev=0;
	cout<<"The Node Is Deleted From The Head In The List\n";
}
void delete_from_position(){
	int loc,i;
	node*traverse=head;
//	traverse=new node;
	if(head=NULL){
		cout<<"The List Is Empty";
	}
	else{
		
		cout<<"Enter The Location Where The Data Is To be deleted:: ";
		cin>>loc;
		//traverse=head;
	    for(int i=0;i<loc;i++){
			traverse=traverse->next;
		}
		
		traverse->prev->next=traverse->next;
	
		traverse->next->prev=traverse->prev;
}
		cout<<"The Node Is Deleted From Specific position from The List";
	
}
void delete_from_tail(){
	node*traverse,*temp;
	if(head=NULL){
		cout<<"The List Is Empty";}
		else{
			traverse=head;
	while(traverse->next!=NULL){
		traverse->next=temp;
		traverse=traverse->next;
	
	}
		
     temp->prev->next=0;
		cout<<"The Node Is Deleted From Tail In The List:: ";
		cout<<"\n";
		}
	}

void printlist()
{
    node* temp;
  // List is empty
    if (head == NULL)
        cout<<"List is empty\n";
  // Else print the Linklist
    else {
        temp = head;
        cout<<"Display the Data\n ";
        while (temp != NULL)
		   {
		   	cout<<temp->data<<" -> ";
            temp = temp->next;
        }
       
    }
}

int main(){
	int choice;
	cout<<"1- For Insert A Node  at head in the list\n";
	cout<<"2-For Insert A Node at Specific Position in the list\n";
	cout<<"3-For insert A Node at Tail in the list\n";
	cout<<"4- For Delete A Node  From head in the list\n";
	cout<<"5-For Delete A Node  From Specific Position in the list\n";
	cout<<"6-For Delete A Node From Tail in the list\n";
	cout<<"7-For Print The Following Doubly Linked List\n";
		cout<<"8-For Exit\n";
	for(int choice=0;choice<=8;choice++){
		cout<<"Enter Your Choice:: ";
		cin>>choice;
		switch(choice){
			case 1:
				insert_at_head();
			break;
			case 2:
				insert_at_position();
			break;
			case 3:
				insert_at_tail();
			break;
			case 4:
				delete_from_head();
			break;
			case 5:
				delete_from_position();
			break;
			case 6:
				delete_from_tail();
			break;
			case 7:
				printlist();
				break;
			case 8:
		        exit(1);
				break;
			default:
				cout<<"Wrong Choice";	
				break;
		}
		}
		return 0;
	}


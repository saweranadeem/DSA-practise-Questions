   //to check where the list is started we use the HEAD pointer which store the address of first node
   //and th check the last node we use the pointer name 
#include<iostream>
using namespace std;
struct node {   // here , i make an node
	int data;   
	node*next;  // make a pointer of name next BCZ IT POINtS To the Next Node; 
};
//TRAVERSE IN LINKED LIST
struct node*head=NULL;     //make a pointer of name head 
void display(){
	node*temp;
	//list is empty
	if(head==NULL){
		cout<<"List Is Empty\n";
	}
	//else print the linked list
	else{
		temp=head;
		cout<<"Display the Data";
		while(temp!=NULL)
		{
			cout<<temp->data<<"->";
			temp=temp->next;
		}
	}
}
 Insert_At_Front(){ // make this function to insert the value in front
    int value;
	node*temp;   // make a node of name temp
	temp=new node;
	cout<<"Enter The Value in Date1";
	cin>>value;
	temp->data=value;
	temp->next=head;
	temp=head;   
}
void Insert_At_Position(){ //make this function to enter a node at specific position
	int value,i,location;     //declare a to enter data in node and location to check
	// where the new node will be added 
	node*temp,*temp1;   // make a node of name temp1
	temp1=new node;
	if (temp1==NULL){
		cout<<"OVERFLOW";
	}
	else{
		temp=head;
		cout<<"Enter The location\n";
		cin>>location;
		for(int i=0.;i<location;i++){
			temp=temp->next;
			if(temp==NULL){
				cout<<location;
				return;
			}
		}
		cout<<"Enter The Value";
	cin>>value;
	temp->data=value;  
	temp->next=temp1->next;
	temp->next=temp1;
	cout<<"Node Inserted";
		
	}

}
Insert_At_End(){
	int value;
	node*temp,*temp1;   // make a node of name temp and temp1 and temp=START
	temp=new node;
	temp1=new node;
	
	cout<<"Enter The Value in Date3";
	cin>>value;
	//changes links
	temp->data=value;
	temp->next=NULL;
	temp1=head;
	while(temp1->next!=NULL){
		temp1=temp1->next;
	}
	temp1->next=temp;
}

int main(){
	int ch;
	cout<<"***The Following manues are***\n";
	cout<<"1-Insert_At_Front\n";
	cout<<"2-Insert_At_Position\n";
	cout<<"3-Insert_At_End \n";
		for(ch=0;ch<=4;ch++) {         //using for loop which runs at the end of choice 
	
		cout<<"Enter Your Choice:";
		cin>>ch;}
		switch(ch) {                   //using switch statement
			case 1:
			   	Display(1) ; //call the pop function with obj
			break;
				case 2:
			   Insert_At_Front() ; //call the pop function with obj
			break;
				case 3:
			   Insert_At_Position() ; //call the pop function with obj
			break;	
				case 4:
			   Insert_At_End() ; //call the pop function with obj
			break;
}
}

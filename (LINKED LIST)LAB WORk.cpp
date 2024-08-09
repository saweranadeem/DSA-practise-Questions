 #include<iostream>
using namespace std;
struct node{   //create A Node
	int data;
	node*next;
};
struct node*head=NULL;   
void insert_at_head(){
	int data;
	node*temp;  //New Node
	temp=new node;
	cout<<"Insert The Data At The Head In The List::\t";
	cin>>data;
	temp->data=data;
	temp->next=head;
	temp=head;
}
void insert_at_position(){
	int data,loc,i;
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
	traverse->next=temp;}
void insert_at_tail(){
	int data;
	node*temp,*traverse;
	temp=new node;
	traverse= new node;
	cout<<"Insert The Data At The Tail In The List::\t ";
	cin>>data;
	cout<<"\n";
	temp->next=NULL;
	temp->data=data;

	traverse=head;
	while(traverse->next!=NULL){
	traverse=traverse->next;
	}
	traverse->next=temp;
}
void delete_from_head(){
	node*temp;
	temp=new node;
	if(temp->next=NULL){
		cout<<"The List Is Empty";
	}
	temp=head;
	head=head->next;
	cout<<"The Node Is Deleted From The Head In The List\n";
}
void delete_from_position(){
	int loc;
	node*temp,*traverse;
	cout<<"Enter The location from Where The Data to be deleted";
	cin>>loc;
	traverse=head;
	for(int i=0;i<loc;i++){
		traverse=traverse->next;
 }
	temp = traverse-> next;  
        traverse -> next = temp -> next;  
        temp -> next= traverse;  
	
	cout<<"The Node Is Deleted At Specific Position From The List";
}

void delete_from_tail(){
	node*temp,*traverse;
	temp=head;
	while(temp->next!=NULL){
		traverse=temp;
	temp=temp->next;
	}
	traverse->next=0;
		cout<<"The Node Is Deleted From The Tail In The List\n";
} 
// Function to traverse the linked list
void printlist(){
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
int main()
{
	int choice;
	cout<<"***The Following Manues Are***\n";
	cout<<"1)     Create a new node\n ";
	cout<<"1)     Insert A New Node At Head\n ";
	cout<<"2)     Insert A New Node At Specific Position\n ";
	cout<<"3)     Insert A New Node At Tail\n ";
	cout<<"4)     Delete A  Node From Head\n ";
	cout<<"5)     Delete A  Node From Specific Position\n";
	cout<<"6)     Delete A  Node From Tail\n ";
	cout<<"7)      Print The Following List\n";
    cout<<"8)     Exit\n ";
		for(int choice=0;choice<=8;choice++){      //using for loop which runs at the end of choice 
	    cout<<"Enter Your Choice:";
		cin>>choice;

		switch(choice) {                   //using switch statement
	        
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
				cout<<"exit";
			break;
			    
				default:
				cout<<"Wrong Choice";
			break;
	
}
}

}

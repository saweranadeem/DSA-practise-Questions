#include<iostream>
#include<conio.h>
using namespace std;
int queue[5];  //declare the QUEUE Of n=5
int n=5;
int rear=-1,front=-1;
int isEmpty(){   // using this function to check whether the queue is empty or not

	if (rear==-1&&front==-1){
		cout<<"The Queue Is Empty::\n";
	}
}
int isFull(){   //using this function to check the whether the queue is full or not
	if(front>=(rear+1)%n){
	cout<<"The Queue Is Full::\n";
       }
       }
int enqueue(int value){    //using this function to enter the value in queue
	if(front==-1&&rear==-1){
	cout<<"The Queue is underflow::\n";
		rear=0;
		front=0;
		queue[rear]=value;
	}
	else{
		(rear=(rear+1)%n);
		queue[rear]=value;
	//	cout<<"The Value Entered Is::\t"<<value;
	//	cout<<"\n";
	}
}
int dequeue(){
	cout<<"The Elements Deleted From The Queue Is::\t"<<queue[front]<<"\n";
	if(front==rear){
		cout<<"Then\t";	
		front==-1;
		rear==-1;
		
		}
	else{
		(front=(front+1)%n);
	}	
}
printQueue(){
	 cout<<"The Queue Elements Are::\t";
	    for(int i=front;i<=rear;i++){
	        cout<<queue[i]<<"\t";
	}
}
int main()
{
	int a,choice;
	cout<<"***The Following manues are***\n";
	cout<<"1-For EnQueue\n";
	cout<<"2-For DeQueue\n";
	cout<<"3- For PrintQueue\n";
	cout<<"4- For Exit\n";
	isEmpty();  // function calling
	for(choice=0;choice<=4;choice++) {         //using for loop which runs at the end of choice 
	
		cout<<"Enter Your Choice:";
		cin>>choice;
		switch(choice) {                   //using switch statement
			case 1:
				
				cout<<"Enter The Value In Queue::\t";
				cin>>a;
				enqueue(a);             //call the enqueue function 
				break;
			case 2:
			    dequeue(); //call the dequeue function 
				break;
			
			case 3:               //call the print function  
				printQueue();
				break; 
			case 4:
			    cout<<"Exit\n";
				break;
				
			default:
			 	cout<<"Wrong choice";
		}	
	}
	isFull();
	getch();
	
}


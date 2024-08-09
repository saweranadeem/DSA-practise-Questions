#include<iostream>
#include<conio.h>
#include<string>
char arr[7];      //define a stack if n=100    
int top=-1;
char n=8;
int push(char value) {        //using this function to Enter The  cahr In Stack
	
	if(top<=n-1) {
	    top++;
		arr[top]=value;
	}
}
void printstack() {             //using this function to display  The Value of Stack
	for(int i=0;i<=n;i++) {
		cout<<arr[i]<<"\t";
		cout<<"\n";
	}
}
int reverse()
{
	for(int i=top;i>=0;i--)
	{
		cout<<"Reverse Char Of Stack Are\t"<<arr[top];
	}
}
int main()
{
	{
		
	int ch,chr;
	cout<<"***The Following manues are***\n";
	cout<<"1-For Push\n";
	cout<<"2-For pop\n";
	cout<<"3- For Display\n";
	cout<<"4- For Exit\n";
	isEmpty();
	for(ch=0;ch<=4;ch++) {         //using for loop which runs at the end of choice 
	
		cout<<"Enter Your Choice:";
		cin>>ch;
		switch(ch) {                   //using switch statement
			case 1:                    //call the push function
				
				cout<<"Enter a char in Stack\t";
				cin>>chr;
				push(chr);             
				break;
			case 2:                 //call the display function
			     printstack();
				break;
			
			case 3:                 //call the reverse function
                reverse();
				break; 
			case 4:
			    cout<<"Exit";
				break;
				
			default:
			 	cout<<"Wrong choice";
		}	
	}
	
	getch();
	
}
}

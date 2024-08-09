#include<iostream>
using namespace std;
int main()
{
	int a,b,ch,sum,sub,mult,div;
	cout<<"Enter Two Num";
	cin>>a>>b;
	cout<<"Enter Choice";
	cin>>ch;
	switch(ch){
	
    case 1:
    sum=a+b;
	cout<<"Sum Of Two Num :"<<"\t"<<sum<<"\n";
	break;
	case 2:
    sub=a-b;
	cout<<"Sub Of Two Num :"<<"\t"<<sub<<"\n";
	break;
	case 3:
	mult=a*b;
	cout<<"Mult Of Two Num :"<<"\t"<<mult<<"\n";
	break;
	case 4:
	div=a+b;
	cout<<"Div Of Two Num :"<<"\t"<<div<<"\n";
	break;
	return 0;
	}	
}

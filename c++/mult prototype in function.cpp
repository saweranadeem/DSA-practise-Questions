#include<iostream>
using namespace std;
int mult(int,int);
int main()
{

int c,d;
cout<<"Enter Two Numbers";
cin>>c>>d;
cout<<"The Mult Of Two Numbers Are;\t"<<mult(c,d);
}
int mult(int a,int b)
{
   int 	mult=a*b;
   return mult;
}

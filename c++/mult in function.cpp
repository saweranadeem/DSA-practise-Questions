#include<iostream>
using namespace std;
int mult(int a,int b)
{
   int 	mult=a*b;
   return mult;
}
int main()
{

int c,d;
cout<<"Enter Two Numbers";
cin>>c>>d;
cout<<"The Sum Of Two Numbers Are;\t"<<mult(c,d);
}


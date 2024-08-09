#include<iostream>
using namespace std;
int fac(int n){    //define a function  
if (n==0){         //base case or calling a recursion
	return (1);
	}
else{
	return(n*fac(n-1));  //calling a recursion
}		
}
int main()
{
	int a=7;
	cout<<fac(7);  //call a function
}

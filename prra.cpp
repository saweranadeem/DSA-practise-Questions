#include<iostream>
using namespace std;
int main(){
	int array[5];
	cout<<"Enter Five Digits\n";
	for(int i=0;i<5;i++){
		cin>>array[i];
	}
	for(int i=0;i<5;i++){
		cout<<array[i];
		cout<<"\t";
	}

}

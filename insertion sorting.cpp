//././#include<iostream>
using namespace std;
void insetionsorting(int array[]){
	int temp,n=10;
	for(int i=0;i<n;i++){
		for(int j=i;j>=1;j--){
		if(array[j-1]>array[j]){
			temp=array[j-1];
			array[j-1]=array[j];
			array[j]=temp;
		}
}
	}
}
int main(){
		int array[10];
	for(int i=0;i<10;i++){
	
	cin>>array[i];
	} cout<<"Before Sorting\n";
		for(int i=0;i<10;i++){
		cout<<array[i]<<"\t";
	}
	insetionsorting(array);
	cout<<"\n";
	cout<<"After Sorting\n";
	for(int i=0;i<10;i++){
		cout<<array[i]<<"\t";
	}
	
}	
L;./

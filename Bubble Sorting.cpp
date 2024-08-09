#include<iostream>
using namespace std;
void bubbblesortinting (int array[]){
	int temp,n=10;
	for(int i=0;i<n;i++){
	  for(int j=0;j<n-i-1;j++){
	  	if(array[j]>array[j+1]){
	  		temp=array[j];
	  		array[j]=array[j+1];
	  		array[j+1]=temp;
		  }
			
		
		}
	}
}
int main(){
	int array[10];
	for(int i=0;i<=10;i++){
		cin>>array[i];
	} cout<<"Before Sorting\n";
		for(int i=0;i<=10;i++){
		cout<<array[i]<<"\t";
	}
	bubbblesortinting (array);
	cout<<"\n";
	cout<<"After Sorting\n";
	for(int i=0;i<=10;i++){
		cout<<array[i]<<"\t";
	}
	
}	


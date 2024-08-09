#include<iostream>  
using namespace std;   
int Smallestvalue(int array[],int i)  
{  
    int pos,k;  
    k =array[i];  
    pos= i;  
    for(int j=i+1;j<10;j++)  
    {  
        if(array[j]<k)  
        {  
            k= array[j];  
            pos=j;  
        }  
    }  
    return pos;  
} 
int main ()  
{  
   int array[10]; 
	cout<<"Enter 10 integers: "<<endl;
   
    for(int i=0; i<10; i++)
	 {
      cin>>array[i];
    }  
    int pos,temp,l=0;  
    cout<<"\n Before Sorting\n";  
    for(int i=0;i<10;i++)  
    {  
        cout<<array[i]<<" ";  
    } 
    for(int i=0;i<10;i++)  
    {  
        pos =Smallestvalue(array,i);  
        temp = array[i];  
        array[i]=array[pos];  
        array[pos] = temp; 
        l++;
    }  
    cout<<"\n After Sorting\n";  
    for(int i=0;i<10;i++)  
    {  
        cout<<array[i]<<" ";  
    } 
    cout<<"\nNumber of jumps required to sort the array: "<<l;
    return 0;  
}  


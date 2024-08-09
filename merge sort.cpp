#include<iostream>
using namespace std;
void merge(int arr[], int P, int m, int n, int size)
{
   int i = P;
   int j = m + 1;
   int k = P;
   int temp[size];

   while (i <= m && j <= n) 
	{
      if (arr[i] <= arr[j]) 
		{
      temp[k] = arr[i];
      i++;
      k++;
      }
      else 
		{
      temp[k] = arr[j];
      j++;
      k++;
      }
   }
   
   while (i <= m) 
	{
      temp[k] = arr[i];
      i++;
      k++;
    }

    
   while (j <= n) 
	{
      temp[k] = arr[j];
      j++;
      k++;
    }

    
    for (int p = P; p <= n; p++)
	 {
        arr[p] = temp[p];
    }
}

void mergeSorting(int arr[], int P, int n, int size)
{
    if (P < n) 
	 {
      int m = (P + n) / 2;
		mergeSorting(arr, P, m, size);
      mergeSorting(arr, m + 1, n, size);
		merge(arr, P, m, n, size);
    }
}

int main()
{
	 cout<<"******** Merge Sort **********"<<endl;
    cout << "Enter size of array: ";
    int size;
    cin >> size;
    int array[size];

    cout << "Enter " << size << " Numbers " << endl;
    for (int i = 0; i < size; i++) 
	 {
        cin >> array[i];
    }
    cout << "Before Sorting" << endl;
    for (int i = 0; i < size; i++) 
	 {
        cout << array[i] << " ";
    }
    cout << endl;
    mergeSorting(array, 0, (size - 1), size); 

    cout << "After Sorting" << endl;
    for (int i = 0; i < size; i++) 
	 {
        cout << array[i] << " ";
    }

    return 0;
}
 


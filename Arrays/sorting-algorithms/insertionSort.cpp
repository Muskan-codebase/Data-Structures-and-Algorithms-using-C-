//Sorting Algorithm
//2. Insertion Sort
#include<iostream>
using namespace std;

int insertionSort(int arr[], int size)
{
	int key, j = 0;
	
   for(int i = 1; i < size; i++)
   {
   	    key = arr[i];
   	    j = i - 1;
   	    
   	    while(j >= 0 && arr[j] > key)
   	    {
		   arr[j + 1] = arr[j];
		   j = j - 1;	
		}
		
		arr[j + 1] = key;
   }	
}

int main()
{
	int numbers[10];
	int size = sizeof(numbers)/sizeof(numbers[0]);
	
	cout<<"Array\n"<<endl;
	for(int i = 0; i < size; i++)
	{
		cout<<"Enter a number at index position "<<i + 1<<" = ";
		cin>>numbers[i];
	}
	cout<<"\n";
	cout<<"\nElements in Array\n"<<endl;
	for(int i = 0; i < size; i++)
	{
		cout<<numbers[i]<<" ";
	}
	cout<<"\n"<<endl;
	cout<<"Array after Insertion Sort\n"<<endl;
	
	insertionSort(numbers, size);
	
	for(int i = 0; i < size; i++)
	{
		cout<<numbers[i]<<" ";
	}
	
	return 0;
}

//Sorting Algorithm
//1. Selection Sort
//compares each element in each iteration with the value at minimum index position.
//Slower and not suitable for larger array lists.
#include<iostream>
using namespace std;

int selectionSort(int arr[], int size)
{
	for(int i = 0; i < size - 1; i++) //iterates from 0 to size - 1 (9)
	{
		int minimum = i;
		
		for(int j = i + 1; j < size; j++) //iterates from 0 + 1 (1) index position to last index position (10)
		{
			if(arr[j] < arr[minimum]) //checks if each element is less then element at minimum index position
			{
				minimum = j; //assigns the value that is smaller then minimum to minimum inde position
			}
		}
		
		if(minimum != i) //checks if minimum is not equal to i i.e iteration is complete
		{
		   //swaps values
		   int temp = arr[minimum];
		   arr[minimum] = arr[i];
		   arr[i] = temp;
		}
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
	cout<<"Array after selection Sort\n"<<endl;
	
	selectionSort(numbers, size);
	
	for(int i = 0; i < size; i++)
	{
		cout<<numbers[i]<<" ";
	}
	
	return 0;
}

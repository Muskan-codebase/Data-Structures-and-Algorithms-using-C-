//Sorting Algorithms
//3. Bubble Sort
#include<iostream>
using namespace std;

int bubbleSort(int arr[], int size)
{
	for(int i = 0; i < size; i++) //iterates from 0 to size (14)
	{
		for(int j = 0; j < size - i - 1; j++) //for each outer loop iteration, the inner loop iterates from 0 to 14 - i - 1
		{
			if(arr[j] > arr[j + 1]) //checks if the current element is greater then element + 1 in each inner loop iteration
			{
				//if yes ... then swap the value
				int temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;	
			}
		}
	}
	
}

int main()
{
	int numbers[] = {34, 67, 2, 56, 8, 32, 98, 24, 3, 54, 78, 21, 12, 99, 100};
	int size = sizeof(numbers)/sizeof(numbers[0]);
	
	cout<<"\n";
	cout<<"\nElements in Array\n"<<endl;
	for(int i = 0; i < size; i++)
	{
		cout<<numbers[i]<<" ";
	}
	cout<<"\n"<<endl;
	cout<<"Array after Insertion Sort\n"<<endl;
	bubbleSort(numbers, size);
	
	for(int i = 0; i < size; i++)
	{
		cout<<numbers[i]<<" ";
	}
	
	return 0;
}

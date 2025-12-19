//Reversing an Array using Recursive approach
#include<iostream>
using namespace std;

void reverseArray(int arr[], int size, int start_index, int end_index)
{
	if(start_index >= end_index) //check if start and end index are same
	{
		//if yes, end program execution
		return;
	}
	
	//else, swap elements at start and end index
	swap(arr[start_index], arr[end_index]);
	//continue calling function recursive by incrementing start index and decrementing end index
	reverseArray(arr, size, start_index + 1, end_index - 1);
}

int main()
{
	int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int size = sizeof(numbers)/sizeof(numbers[0]);
	
	cout<<"\nElements in array after reverse\n"<<endl;
	for(int i = 0; i < size; i++)
	{
		cout<<numbers[i]<<" ";
	}
	cout<<"\n";
	
	cout<<"\nElements in array after reverse\n"<<endl;
	reverseArray(numbers, size, 0, size - 1);
	for(int i = 0; i < size; i++)
	{
		cout<<numbers[i]<<" ";
	}
	
	return 0;
}

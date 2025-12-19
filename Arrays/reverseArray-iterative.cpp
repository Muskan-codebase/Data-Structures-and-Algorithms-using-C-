//Reversing an Array using Iterative approach
#include<iostream>
using namespace std;

void reverseArray(int arr[], int start_index, int end_index)
{
	while(start_index < end_index) //check if start index is less then the end index
	{
		//swap values
		int temp = arr[start_index];
		arr[start_index] = arr[end_index];
		arr[end_index] = temp;
		
		start_index++; //increment start index by 1
		end_index--; //decrement end index by 1
	}
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
	reverseArray(numbers, 0, size - 1);
	for(int i = 0; i < size; i++)
	{
		cout<<numbers[i]<<" ";
	}
	
	return 0;
}

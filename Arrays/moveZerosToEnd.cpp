//Move zeros to end
#include<iostream>
using namespace std;

void MoveZeroToEnd(int arr[], int size, int end_index)
{
	int j = 0; //variable j hold initial value of zero;
	
	for(int i = 0; i < size; i++) //iterates over each element;
	{
		if(arr[i] != 0) //checks if any element is a non-zero element
		{
			arr[j] = arr[i]; //assigns the non-zero element to arr[j]
			j++; //increments j
		}
	}
	
	while (j < size) //checks if j still has remaining space?
	{
		arr[j] = 0; //assigns the remaining index positions to 0
		j++; //increments until it reaches the complete size of the array
	}
}

int main()
{
	int numbers[] = {1, 2, 0, 4, 0, 5, 0, 0, 3, 10, 0, 0, 3, 9};
	int size = sizeof(numbers)/sizeof(numbers[0]);
	
	cout<<"Elements in array before moving all zeros to end\n"<<endl;
	for(int i = 0; i < size; i++)
	{
		cout<<numbers[i]<<" ";
	}
	cout<<"\n";
	MoveZeroToEnd(numbers, size, size - 1);
	
	cout<<"\nElements in array after moving all zeros to end\n"<<endl;
	for(int i = 0; i < size; i++)
	{
		cout<<numbers[i]<<" ";
	}
	
	return 0;
}

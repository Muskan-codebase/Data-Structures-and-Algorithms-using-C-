//Find minimum & maximum elements in an array
#include<iostream>
using namespace std;

int MaximumMinimumElement(int arr[], int size, int &max_n, int &min_n)
{ 
    max_n = arr[0];
	min_n = arr[0];
	
	for(int i = 0; i < size; i++) //loop to iterate over each element
	{
		if(arr[i] > max_n) //check if current element is greater then max_n = 0 -> 473
		{ 
		   //if yes, then assign the element at current index to max_n
		   max_n = arr[i];	
		}
		
		if(arr[i] < min_n)
		{
			//if yes, then assign the element at current index to min_n
			min_n = arr[i];
		}
	}	
}

int main()
{
	int numbers[] = {473, 79, 2, 568, 34, 9, 234, 67, 89, 100};
	int size = sizeof(numbers)/sizeof(numbers[0]);
	int minimum_number, maximum_number;
	
	MaximumMinimumElement(numbers, size, maximum_number, minimum_number);
	
	cout<<"Maximum Number = "<<maximum_number<<endl;
	cout<<"Minimum Number = "<<minimum_number<<endl;
	
	return 0;
}

//Find second Largest element in an Array
#include<iostream>
using namespace std;

int secondLargeElement(int arr[], int size, int &first, int &second)
{
	first = 0;
	second = 0;
	
	for(int i = 0; i < size; i++)
	{
		if(arr[i] > first)
		{
			second = first; //update the second value to the first value i.e 473
			first = arr[i]; //assign the new largest value to first var
		}
		
		if(arr[i] > second && arr[i] != first) //check if the current element being processed is greater then second and not equal to first
		{
			second = arr[i]; //assign the second largest element to second var
		}
	}
}

int main()
{
	int numbers[] = {473, 79, 2, 568, 34, 9, 234, 67, 89, 100, 2478, 6790};
	int size = sizeof(numbers)/sizeof(numbers[0]);
	
	int first, second;
	
	secondLargeElement(numbers, size, first, second);
	
	cout<<"First largest element = "<<first<<endl;
	cout<<"Second largest element = "<<second<<endl;
	
	return 0;
}

//Linear Search Algorithm
//works on Unsorted Array
#include<iostream>
using namespace std;

int LinearSearch(int arr[], int size, int element)
{
	for(int i = 0; i < size; i++) //iterate through each element in an array.
	{
		if(arr[i] == element) //compare each element with the given element to search.
		{
			return i; //return the index psoition of the element.
		}
	}
	
	return -1; //return -1 or end the program if not found.	
}

int main()
{
	int numbers[] = {1, 34, 6, 2, 86, 74, 24, 78, 10, 78, 89, 99, 25, 30, 24, 14, 12, 9, 100};
	int size = sizeof(numbers)/sizeof(numbers[0]);
	int element;
	
	cout<<"Enter a Number to search in Array = ";
	cin>>element;
	cout<<"\n";
	
	int index = LinearSearch(numbers, size, element);
	
	if(index != -1)
	{
		cout<<"The number "<<element<<" found at index position "<<index<<endl;
	} else {
		cout<<"The number "<<element<<" was not found!"<<endl;
	}
	
	return 0;
}

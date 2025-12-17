//Binary Search Algorithm
//works on Sorted Array
#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int l, int r, int element)
{
	while (l <= r)
	{
		int mid = (l + r) / 2;
		
		if(arr[mid] == element)
		{
			return mid;
			
		} else if(element > arr[mid])
		{
			l = mid + 1;
		} else if(element < arr[mid])
		{
			r = mid - 1;
		}
	}
	
	return -1;
	
}

int main()
{
	int numbers[10];
	int size = sizeof(numbers)/sizeof(numbers[0]);
	int left = 0;
	int right = sizeof(numbers)/sizeof(numbers[0]) - 1;
	int element;
	
	cout<<"Enter elements in ascending order\n";
	for(int i = 0; i < size; i++)
	{
		cout<<"Enter element at index position "<<i + 1<<" = ";
		cin>>numbers[i];
	}
	cout<<"\n";
	cout<<"Elements in an Array\n";
	for(int i = 0; i < size; i++)
	{
		cout<<numbers[i]<<" ";
	}
	cout<<"\n";
	cout<<"\nEnter a number to search = ";
	cin>>element;
	
	int index = binarySearch(numbers, size, left, right, element);
	
	if(index != -1)
	{
		cout<<"\nThe number "<<element<<" is found at index position = "<<index<<endl;
	} else {
		cout<<"\nThe number "<<element<<" was not found!"<<endl;
	}
	
	return 0;
}

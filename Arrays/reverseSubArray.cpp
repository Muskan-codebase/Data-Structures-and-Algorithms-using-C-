//Reversing Sub array (Array rotation)
#include<iostream>
using namespace std;

void reverseArray(int arr[], int size, int start_index, int end_index)
{
	if(start_index <= end_index) //check if start index is less then end index
	{
			//swap element at start index with element at end index
		int temp = arr[start_index];
		arr[start_index] = arr[end_index];
		arr[end_index] = temp;
			
		//increment start index & decrement end index
		end_index--;
		start_index++;
	}	
}

int main()
{
	cout<<"Reversing Sub Array\n"<<endl;
	int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int size = sizeof(numbers)/sizeof(numbers[0]);
	int start_index, end_index;
	cout<<"\nElements in array after reverse\n"<<endl;
	for(int i = 0; i < size; i++)
	{
		cout<<numbers[i]<<" ";
	}
	cout<<"\n";
	
	cout<<"\nEnter the start index = ";
	cin>>start_index;
	cout<<"Enter the last index = ";
	cin>>end_index;
	
	cout<<"\nSub array after reverse\n"<<endl;
	reverseArray(numbers, size, start_index, end_index);
	for(int i = 0; i < size; i++)
	{
		cout<<numbers[i]<<" ";
	}
	
	return 0;
}

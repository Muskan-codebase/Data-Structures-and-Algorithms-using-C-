//Two Pair sum Algorithm
#include<iostream>
using namespace std;

void twoPairSum(int arr[], int size, int target)
{
	bool found = false;
	
	for(int i = 0; i < size; i++) //outer loop iterates over each element
	{
		for(int j = i + 1; j < size; j++) //inner loop iterates over each element further outer loops element
		{
			if (arr[i] + arr[j] == target) //checks if i + j equals to the target
			{
				cout<<"\nPair of target "<<target<<" is "<<arr[i]<<" + "<<arr[j]<<" = "<<target<<endl;
				found = true;
			}
		}
	}
	
	if(!found)
	{
	   cout<<"\nNo pair found!\n"<<endl;	
	}
}

int main()
{
	int numbers[] = {1, 2, 3, 4, 5};
	int size = sizeof(numbers)/sizeof(numbers[0]);
	int target;
	
	cout<<"Elements in an Array\n"<<endl;
	for(int i = 0; i < size; i++)
	{
		cout<<numbers[i]<<" ";
	}
	cout<<"\n"<<endl;
	cout<<"Enter a number to get it's pair sum = ";
	cin>>target;
	
	twoPairSum(numbers, size - 1, target);
	
	return 0;
	
}

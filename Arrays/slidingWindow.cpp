//Sliding Window Algorithm
#include<iostream>
using namespace std;

int maxSubarraySum(int arr[], int size, int k)
{
	k = 0;
	int windowSum = 0;
	int maxSum = 0;
	
	for(int i = 0; i < size; i++) //iterate from index 0 to 3
	{
		windowSum += arr[i]; //sum up all array elements from 0 - 3
	}
	
	maxSum = windowSum; //store first window sum into max sum variable
	
	for(int i = k; i < size; i++) //start iterating from index position 3 to size
	{
		//add and assign the new array element while subtarcting the old value
		windowSum = windowSum + arr[i] - arr[i - k];
		maxSum = max(maxSum, windowSum);
	}
	
	return maxSum;
}

int main()
{
	int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int size = sizeof(numbers)/sizeof(numbers[0]);
	int k = 3;
	
	cout<<"Maximum Sum = "<<maxSubarraySum(numbers, size, k);
	return 0;
}

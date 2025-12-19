//Recursion
//2. Sum of all numbers
#include<iostream>
using namespace std;

int sum(int n)
{
	if (n == 0)
	{
		return 0;
	} else {
		return (n % 10) + sum(n / 10);
	}
}

int main()
{
	int number = 12345;
	int sumOfDigits = sum(number);
	
	cout<<"The sum of all digits: "<<sumOfDigits<<endl;
	
	return 0;
}

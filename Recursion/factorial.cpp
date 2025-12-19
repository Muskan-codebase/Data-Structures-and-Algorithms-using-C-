//Recursion
//1. Factorial value of a given Number using Recursion
#include<iostream>
using namespace std;

int Factorial(int n)
{
	if(n == 1) //base condition -> if number equals to 1
	{
		return 1; //return 1
	} else {
		return n * Factorial(n - 1); //keep calling function recursively until base condition is met and multiply with current value
	}
}
//once the base condition is met, all values are returned to previous function calls in reverse ...
int main()
{
	int number = 5;
	int result = Factorial(number);
	
	cout<<"The Factorial value of "<<number<<" is "<<result<<endl;
	
	return 0;
}

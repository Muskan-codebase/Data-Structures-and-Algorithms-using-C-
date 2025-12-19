//Recursion
//3. Fibonacci series
#include<iostream>
using namespace std;

int Fibonacci(int a, int b, int n)
{
	if(n == 0) //checks if there are no numbers left
	{
		return 0;
	} else {
		
		cout<<a<<" "; //print a
		Fibonacci(b, a + b, n - 1); //1, 0 + 1, 7-1 (8) 1, 1, 6 -> 1, 2, 5 -> 2, 3, 4 -> ... and so on
	}
}

int main()
{
	int number = 7;
	Fibonacci(0, 1, number);
	
	return 0;
}

//Recursion
//5. check whether a number is Palindrome using recursion
#include<iostream>
#include<string>
using namespace std;

void Palindrome(string &n, int start_index, int end_index)
{
	if(start_index >= end_index) //check if start index is great or equal to end index
	{
		return; //if yes then return...
	} else {
		
		swap(n[start_index], n[end_index]); //swap elements at start & end index
		Palindrome(n, start_index + 1, end_index -1); //continue calling the function recursively by increment start index &
		//decrementing last index unitl the base condition is met
	}
}
int main()
{
	string number;
	
	cout<<"Enter any digits of number to check palindrome = ";
	cin>>number;
	cout<<"\nOriginal number: "<<number<<endl;
	
	Palindrome(number, 0, number.length() - 1);
	string reverse_number = number;
	cout<<"\nReverse number: "<<reverse_number<<endl;
	
	return 0;
	
}

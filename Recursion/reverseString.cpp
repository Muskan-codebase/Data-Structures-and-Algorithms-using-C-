//Recursion
//4. Reversing a string using Recursion
#include<iostream>
#include<string>
using namespace std;

void reverseString(string &text, int start_index, int end_index)
{
	if(start_index >= end_index)
	{
		return;	
	} else {
		
		swap(text[start_index], text[end_index]);
		reverseString(text, start_index + 1, end_index - 1);
	}
}

int main()
{
	string text = "recursion";
	cout<<"\nOriginal string: "<<text<<endl;
	
	reverseString(text, 0, text.length() - 1);
	cout<<"Reversed string: "<<text<<endl;

	return 0;
}

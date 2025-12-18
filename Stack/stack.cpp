//Stack
//Stack is a linear data structure
//It follows the principle of LIFO (Last in First out)
//Any element push onto the stack is the last element
//The last element on top of stack is removed/popped out first.
//Example - A container of books. Any book added is the last book. The last book on top is the first one to go out.
#include<iostream>
using namespace std;

class Stack {
	
	private:
		int top; //Theindex position of array elements
		int arr[5]; //Array of 5
		int size = sizeof(arr)/sizeof(arr[0]); //siz eof the array i.e 5
		
	public:
		Stack() //executed when the constructor is called and assigned values to array elements as 0 by default
		{
			top = -1;
			for(int i = 0; i < size; i++)
			{
				arr[i] = 0;
			}
		}
		
		bool isEmpty() //check if stack is empty
		{
			if(top == -1)
			{
				return true;
			} else {
				return false;
			}
		}
		
		bool isFull() //checks if stack is full
		{
			if(top == size - 1)
			{
				return true;
			} else {
				return false;
			}
		}
		
		int push(int val) //push a particular value on top of stack
		{
			if(isFull())
			{
				cout<<"\nStack overflow!\n"<<endl;
			} else {
				
				top++; //increment index position top by 1
				arr[top] = val; //assign value to index positon top
			}	
		}
		
		int pop()
		{
			if(isEmpty()) //check if stack is empty before popping values
			{
				cout<<"\nStack underflow\n"<<endl;
			} else {
				int x = arr[top]; //assigned popped/removed value to x
				arr[top] = 0; //assign 0 to current popped/removed value
				top--; //increment top index position by 1
				return x; //return the popped/removed element
			}
		}
		
		void display()
		{
			//display all elements in stack
			cout<<"\nElements in Stack data structure are:\n"<<endl;
			for(int i = size - 1; i >= 0; i--)
			{
				cout<<arr[i]<<endl;
			}
		}
		
		void peek(int index)
		{
			if(isEmpty()) //checks if stack is empty
			{
				cout<<"\nStack is Empty!\n"<<endl;
			} else {
				//gets the posiition of an element at a given index
			    cout<<"\nThe element at index position "<<index<<" is "<<arr[index]<<endl;
		    }
		}
		
		void change(int index, int val)
		{
			//changes element at a given index position
			arr[index] = val;
			cout<<"\nValue changed at index position "<<index<<endl;
		}
		
		int count()
		{
			//counts all elements in the stack
			cout<<"\nThe total elements in stack are "<<sizeof(arr)/sizeof(arr[0])<<endl;
		}
};

int main()
{
	Stack stack;
	int option;
	int value;
	int index;
	
	do {	
		cout<<"\nPress 1 to push"<<endl;
		cout<<"Press 2 to pop"<<endl;
		cout<<"Press 3 to check if stack is empty"<<endl;
		cout<<"Press 4 to check if stack is full"<<endl;
		cout<<"Press 5 to display elements in stack"<<endl;
		cout<<"Press 6 to change an element at an index position"<<endl;
		cout<<"Press 7 to peek"<<endl;
		cout<<"press 8 to count all elements in the stack"<<endl;
		cin>>option;
		
		switch(option)
		{
			case 1:
				cout<<"\nEnter an element to push = ";
				cin>>value;
				stack.push(value);
				break;
				
			case 2:
				cout<<"\nPopped Value = "<<stack.pop()<<endl;
				break;
				
			case 3:
				if(stack.isEmpty())
				{
					cout<<"\nStack is Empty!\n"<<endl;	
				} else {
					cout<<"\nStack is not Empty!\n"<<endl;
				}
				break;
				
			case 4:
				if(stack.isFull())
				{
					cout<<"\nStack is Full!\n"<<endl;
				} else {
					cout<<"\nStack is not Full!\n"<<endl;
				}
				break;
				
			case 5:
			    stack.display();
			    break;
			    
			case 6:
				cout<<"\nEnter index position = ";
				cin>>index;
				cout<<"Enter new value = ";
				cin>>value;
				stack.change(index, value);
				break;
				
			case 7:
				cout<<"Enter the index position of an element = ";
				cin>>index;
				stack.peek(index);
				break;
				
			case 8:
				stack.count();
				break;
				
			default:
				cout<<"\nProgram ends ...\n"<<endl;
				break;
				
		}
		
	} while (option != 0);
	
	return 0;
}

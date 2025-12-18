//Circular Queue
#include<iostream>
using namespace std;

class Queue {
	
	private:
		int rear, head; //index positons to keep tract of elment that is inserted and removed
		int arr[5]; //array of size 5
		int size = sizeof(arr)/sizeof(arr[0]); //array size
		
	public:
		Queue() //called when an object of Queue is created
		{
			//assigns head & rear index position to -1 i.e. empty
			head = -1; 
			rear = -1;
			for(int i = 0; i < size; i++) //assign each element 0 by default
			{
				arr[i] = 0;
			}
		}
		
		bool isFull() //checks if queue is full
		{
			if((rear + 1) % size == head) //if rare is the size of array
			{
				return true;
			} else {
				return false; 
			}
		}
		
		bool isEmpty() //checks if queue is empty
		{
			if(rear == -1 && head == -1) //if rear and front are at the same index psoition
			{
				return true;
			} else {
				return false; 
			}
		}
		
		void enqueue(int val) //inserts an element to the queue from the rear aka first come
		{
			if(isFull()) //checks if queue is full first
			{
				cout<<"\nQueue is Full!\n"<<endl;
				
			} else if(isEmpty()) { //if queue is empty ..
				
				//increment rear & head by 1 i.e -1 = 0
				head = rear = 0;
				arr[rear] = val; //assign value at 0 index position
				
			} else { //else if head & rear are not the same ...
				rear = (rear + 1) % size; //keep increment and assigning values for next index
				arr[rear] = val;
			}
		}
		
		int dequeue() //removes the first inserted element
		{
			int x;
			
			if(isEmpty()) //checks if queue is empty
			{
				cout<<"\nQueue is Empty!\n"<<endl;
				return 0;
				
			} else if(head == rear) //if rear and head are both at 0 index positon i.e. only one element
			{
				x = arr[head]; //remove the element
				arr[head] = 0;
				head = rear = -1; //assign head & rear to -1 index position
				return x; //return the dequeued element
				
			} else {
				//otherwise, remove the front/head element and keep icrementing forward
				x = arr[head]; 
				arr[head] = 0;
				head = (head + 1) % size;
				return x;
			}	
		}
		
		void display() 	//displays all elements in Queue
		{
			cout<<"Elements in Queue are\n"<<endl;
			for(int i = 0; i < size; i++)
			{
				cout<<arr[i]<<" ";
			}
			cout<<"\n";
		}
};

int main()
{
	Queue queue;
	int option;
	int value;
	int index;
	
	do {	
		cout<<"\nPress 1 to Enqueue"<<endl;
		cout<<"Press 2 to Dequeue"<<endl;
		cout<<"Press 3 to check if Queue is empty"<<endl;
		cout<<"Press 4 to check if Queue is full"<<endl;
		cout<<"Press 5 to display elements in Queue"<<endl;
		cin>>option;
		
		switch(option)
		{
			case 1:
				cout<<"\nEnter an element to insert into queue = ";
				cin>>value;
				queue.enqueue(value);
				break;
				
			case 2:
			    cout<<"\nDequeued Value = "<<queue.dequeue()<<endl;
				break;
				
			case 3:
				if(queue.isEmpty())
				{
					cout<<"\nQueue is Empty!\n"<<endl;	
				} else {
					cout<<"\nQueue is not Empty!\n"<<endl;
				}
				break;
				
			case 4:
				if(queue.isFull())
				{
					cout<<"\nQueue is Full!\n"<<endl;
				} else {
					cout<<"\nQueue is not Full!\n"<<endl;
				}
				break;
				
			case 5:
			    queue.display();
			    break;
			    
			case 0:
				cout<<"\nProgram ends ...\n"<<endl;
				break;
				
			default:
				cout<<"\nInvalid choice!\n"<<endl;
				break;		
		}
		
	} while (option != 0);
	
	return 0;
}

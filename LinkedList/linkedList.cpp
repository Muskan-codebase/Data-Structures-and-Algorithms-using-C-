//LinkedList
#include<iostream>
using namespace std;

//class Node contains two elements - [data, address of next address]
class Node {
	
	public:
		int data; 
		Node* next;		
};

//class LinkedList consisting of operations to work with Node
class LinkedList { 
	
	//pointer head stores the address of Nodes objects
	Node* head;
	
	public:
		LinkedList() //constructor automatically called when object is created and assigns a default value to head ptr of NULL
		{
			head=NULL;
		}
		
		//operation 1. Inserting element at first
		void insertFirst(int val)
		{
			//creates pointer object of Node class
			Node* temp = new Node;
			temp->data=val; //assigns value to it's data attribute
			temp->next=head; //assigns head ptr value i.e. NULL to it's pointer next
			head = temp; //assign temps address to pointer head
		}
		
		//operation 2. Inserting element at last
		void insertLast(int val)
		{
			Node* temp = new Node; //create new node to insert last
			temp->data=val; //assign value to Nodes data attribute
			temp->next=NULL; //assign NULL value to it's next element
			
			if (head==NULL) //check if head is NULL i.e If the Node is the only node in the LinkedList
			{
				head=temp; //assign temps address to head pointer
			} else {
				
				Node* n=head; //assign head address to n pointer
				while(n->next != NULL) //traverse until n pointer's next address is NULL
				{
					n=n->next;
				}
				//assign temp (new last Node's address) to the second last Nodes next pointer
				n->next=temp;
			}
		}
		
		//operation 3. Delete First element
		int deleteFirst()
		{
			if(head==NULL)
			{
				return -1; //The list and there is nothing to delete;
			}
			
			int x;
			Node* temp = head; //create a pointer object temp and store heads address to it
			head = head->next; //assign address of next Node to head
			x = temp->data;
			delete temp;
			return x;
		}
		
		//operation 4. Delete Last element
		int deleteLast()
		{
			if(head==NULL) //if head is NULL
			{
				return -1; //nothing to delete as list is empty
			}
			
			int x;
			Node* previous; //previous pointer
			Node* current; //current pointer
			Node* temp = head; //temp pointer holds the address of head
			
			if(temp->next == NULL) //if temps next is NULL
			{
				//DELETE temp
				x = temp->data;
				delete temp;
				head=NULL;
				return x;
				
			} else {
				//current & previous hold the address of head
				current=head;
				previous=head;
				
				while(current->next != NULL) //if the current nodes next is NOT NULL
				{
					//Keep traversing
					previous=current; //previous moves to the next node (stores address of current's address)
					current=current->next; //current moves to the next node (stores address of next nodes address)
				}
				 //assign previous nodes next as NULL
				previous->next=NULL;
				x = current->data; //store current nodes data in x
				delete current; //delete current & return the stored data
				return x;
			}		
		}
		
		//Display all Nodes in LinkedList
		void display()
		{
			if (head==NULL)
			{
				cout<<"\nLinkedList is Empty\n"<<endl;
			} else {
				
				Node* temp = head;
				cout<<"\nThe Nodes inside LinkedList are\n"<<endl;
				while(temp != NULL)
				{
					cout<<temp->data<<" ";
					temp=temp->next;
				}
				cout<<"\n";
			}
		}		
};

int main()
{
	LinkedList ll;
	int option, val, x;
	
	while(1)
	{
	   cout<<"\nLINKEDLIST\n"<<endl;
	   cout<<"press 1 to insert first"<<endl;
	   cout<<"press 2 to insert last"<<endl;
	   cout<<"press 3 to delete first"<<endl;
	   cout<<"press 4 to delete last"<<endl;	
	   cout<<"press 5 to display"<<endl;
	   cin>>option;
	   
	   switch(option)
	   {
	   	   case 1:
	   	   	    cout<<"\nEnter Node to insert first = ";
	   	   	    cin>>val;
	   	   	    ll.insertFirst(val);
	   	   	    break;
	   	   	    
	   	   	case 2:
	   	   		cout<<"\nEnter Node to insert last = ";
	   	   		cin>>val;
	   	   		ll.insertLast(val);
	   	   		break;
	   	   		
	   	   	case 3:
	   	   		x = ll.deleteFirst();
	   	   		if(x != -1)
	   	   		{
	   	   			cout<<"\nfirst value deleted = "<<x<<endl;
	   	   			
				} else {
					cout<<"\nLinkedList is Empty\n"<<x<<endl;
				}
	   	   		break;
	   	   		
	   	   	case 4:
	   	   		x = ll.deleteLast();
	   	   		if(x != -1)
	   	   		{
	   	   			cout<<"\nlast value deleted = "<<x<<endl;
	   	   			
				} else {
					cout<<"\nLinkedList is Empty\n"<<x<<endl;
				}
	   	   		break;
	   	   		
	   	   	case 5:
	   	   		ll.display();
	   	   		break;
	   	   		
	   	   	case 0:
	   	   		cout<<"\nProgram ends ...\n"<<endl;
	   	   		
	   	   	default:
	   	   		cout<<"\nInvalid Choice!\n"<<endl;
	   }
	}
	
	return 0;
}

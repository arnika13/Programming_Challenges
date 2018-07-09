#include<iostream>
using namespace std;
#define NUM_OF_NODES 5

class Node {
public:
	int data;
	Node* next;
public:
	Node(int x) :data(x),next(NULL) { }
	~Node()
	{
		delete next;
	}


};

// Inserting the node at nth position in linked list//


/* Given a pointer to the head node, prints the entire linked list */
void printLinkedList(Node* head)
{
	Node* temp = head;
	while (temp != NULL) {
		cout << temp->data << " -> ";
		temp = temp->next;
	}
	cout << "\n";
}

/* Create a new Linked List of size NUM_OF_NODES and return the pointer to first node */
Node* createLinkedList()
{
	int x;
	
	Node *head = NULL;
	Node *previous = NULL;
	
	for (int i = 1; i <= NUM_OF_NODES; i++)
	{	
		cout << "\nEnter the element "<<i<<" of the linkedlist : ";
		cin >> x;
		
		Node* temp = new Node(x);
		if (i == 1) 
		{
			head = temp;
			previous = head;
		}
		
		previous->next = temp;
		previous = temp;
	}
	
	return head;
}

Node* removeDuplicates(Node* head)
{
	
	Node* current = head;

	if (current == NULL)
	{
		return NULL;
	}
	
	Node* temp = current->next;
	while (temp != NULL)
	{

		
		if (current->data == temp->data)
		{
			Node* t = temp->next;
			
			current->next = t;
		}
		else
		{
			current = current->next;
		}
		return head;
		
	}
	
	
	
}

Node * nthtoelement(Node* head, int n)
{

	Node * cur = head;
	Node * prev = head;
	for (int i = 1; i < n; i++)
	{
		if (cur == NULL)
		{
			return NULL;
		}

		cur = cur->next;
	}

	while (cur->next != NULL)
	{
		prev = prev->next;
		cur = cur->next;
	}
	return prev;


}

bool deleteMiddleNode(Node* head)
{
	Node* temp = head;
	Node* current;
	
	if (temp == NULL || temp->next == NULL)
	{
		return false;
	}
	current = temp->next;
	temp->data = current->data;
	temp->next = current->next;
	return true;
  
}

int main()
{
	Node * head= createLinkedList();
	
	printLinkedList(head);

    removeDuplicates(head);

	printLinkedList(head);

	Node * r= nthtoelement(head, 2);

	printLinkedList(head);

	bool result=deleteMiddleNode(head);
	printLinkedList(head);


}
#include<iostream>
using namespace std;
#define NUM_OF_NODES 10

class Node {
public:
	int data;
	Node* next;

public:
	Node(int x) :data(x), next(NULL) { }
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
	Node* head = new Node(10);
	Node * temp = NULL;
	Node * previous = head;
	for (int i = 1; i < NUM_OF_NODES; i++)
	{
		temp = new Node(i * 10 + 10);
		previous->next = temp;
		previous = temp;
	}
	return head;
}

Node* reverseLinkedList(Node* head)
{

	Node* previous = head;
	Node* current = previous->next;
	previous->next = NULL;	// This is the first node which will become the last node pointing to null.
	Node* nextNode = NULL;
	while (current != NULL)
	{
		nextNode = current->next;
		current->next = previous; // current next part is now pointing to previous node instead of pointing to nextnode.
		previous = current;
		current = nextNode;
	}
	head = previous;
	return head;
}

//Program for n’th node from the end of a Linked List//


void findingnthnode(Node* head, int k)
{
	Node* currNode= head; // create a node called cuuuNode which will point to where head node is pointing i.e first node

	int len =1; 

	while (currNode != NULL)
	{
		
		
		currNode = currNode->next;
		len++; // len is to find the length of complete linked list
		
		

	}

	try {
		
	    if (len < k)
		{
			return;

		}
		
	}

	catch (exception e)
	{
		cout << e.what();
	}
	
	currNode = head;

	for (int i = 1; i < (len - k); i++) // len - k = suppose len is 5 and given nth node position is 2 from the end then len-k= 5 - 2 = 3
	{
		currNode = currNode->next;
	}

	cout << "The nth node is : " << currNode->data <<endl;
	

}



int main()
{
	Node *head = createLinkedList();
	printLinkedList(head);
	head = reverseLinkedList(head);
	printLinkedList(head);

    findingnthnode(head, 2);
	


}


// Inserting the node at nth position in linked list//
#include "linkedlist.h"

/* Given a pointer to the head node, prints the entire linked list */
void printLinkedList(Node* head)
{
	Node* temp = head;
	while (temp!= NULL) {
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
		temp = new Node(i*10+10);
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

int main()
{
	Node *head = createLinkedList();
	printLinkedList(head);
	head = reverseLinkedList(head);
	printLinkedList(head);
}

#include<iostream>
using namespace std;

class Node {

public:
	int data;
	Node* next;

public:
	Node(int x) :data(x), next(NULL) {}

	~Node()
	{
		delete next;
	}
};



/* Create a new Linked List of size NUM_OF_NODES and return the pointer to first node */
Node* createLinkedList(int num_nodes)
{
	Node* head = new Node(num_nodes);
	Node * temp = NULL;
	Node * previous = head;
	for (int i = 1; i <num_nodes; i++)
	{
		temp = new Node(i*2);
		previous->next = temp; //previous->next will point to temp node
		previous = temp; //previous node will be same as temp node
	}
	return head;
}

void printLinkedList(Node* head)
{
	Node* temp=head;
	while (temp != NULL) {
		cout << temp->data << " -> ";
		temp = temp->next;
	}
	cout << "\n";
}

Node* reversesublist(Node* head, int k)
{
	Node* previous = head;
	Node* current = previous->next;
	previous->next = NULL;	// This is the first node.
	Node* nextNode = NULL;
	int count = 0;
	while (current != NULL && count <k)
	{
		count++;
		nextNode = current->next;
		current->next = previous;
		previous = current;
		current = nextNode;
		
	}
	head = previous;
	return head;
	
	

}


int main()
{
	int num_nodes,k;
	
	cout << "Enter the number of nodes :" << endl;
	cin >> num_nodes;

	cout << "Enter the number of k: " << endl;
	cin >> k;
	
	Node* head = createLinkedList(num_nodes);

	printLinkedList(head);

	head = reversesublist(head, k);
	printLinkedList(head);
}
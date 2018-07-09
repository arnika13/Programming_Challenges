/*Given a sorted array(increasing order), write an alogirthm to create a binary tree with minimal height*/

#include<iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *left, *right;
	Node(int item) :data(item), left(NULL), right(NULL) { }
	~Node() { delete left; delete right; }

};
	void insert(int *data, int start, int end, Node* &curNode) // curNode is a reference variable 
	{
		if (start > end)
		{
			return;
		}
		 int mid = (start + end) / 2;
		 cout << mid<< " "<<endl;
		
		 curNode = new Node(data[mid]);
	
		 insert(data, start, mid - 1, curNode->left);
		 insert(data, mid + 1, end, curNode->right);
	

	}

	void printTreeInOrder(Node *curNode)
	{
		if (curNode == NULL)
		{
			return;
		}

		printTreeInOrder(curNode->left);
		cout << curNode->data << " ";
		printTreeInOrder(curNode->right);
	}


void main()
{
	Node *rootPtr = NULL;
	int data[] = {1,2,3,4,5};
	int length = sizeof(data) / sizeof(int);
	
	insert(data,0,length-1,rootPtr);

	printTreeInOrder(rootPtr);
}
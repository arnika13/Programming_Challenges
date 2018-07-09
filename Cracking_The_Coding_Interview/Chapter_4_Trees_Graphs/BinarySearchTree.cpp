#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
class Node
{
public:
	int data;
	Node *left , *right;
	Node(int item) :data(item), left(NULL), right(NULL) { }
	~Node() { delete left; delete right; }
};

void insert(int data,Node*  &curNode) // curNode is a reference variable 
{
	if (curNode == NULL)
	{
		curNode = new Node(data);
		return;
	}
	else if (data <= curNode->data)
	{
		insert(data, curNode->left);
	}
	else
	{
		insert(data, curNode->right);
	}
}

/* Given the root Node print the entire tree using Preorder Traversal */
void printTreePreorder(Node *curNode)
{
	if (curNode == NULL)
	{
		return;
	}

	cout << curNode->data << " ";
	printTreePreorder(curNode->left);
	printTreePreorder(curNode->right);
}

/* Given the root Node print the entire tree using Inorder Traversal */
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

/* Given the root Node print the entire tree using Postorder Traversal */
void printTreePostOrder(Node *curNode)
{
	if (curNode == NULL)
	{
		return;
	}

	printTreePostOrder(curNode->left);
	printTreePostOrder(curNode->right);
	cout << curNode->data << " ";
}

bool searchTree(int num, Node* curNode)
{
	if (curNode == NULL)
		return false;

	if (num == curNode->data)
		return true;

	if (num < curNode->data)
		return searchTree(num, curNode->left);
	else
		return searchTree(num, curNode->right);
}

// Given a binary tree, count the number of nodes in the tree

int binaryTreeSize(Node* curNode)
{
	int c = 1;
	if (curNode == NULL)
	{
		return false;
	}
	else
	{
		c+= binaryTreeSize(curNode->left);
		c+= binaryTreeSize(curNode->right);
		return c;
	}
	
}

// Finding the max depth or longest path from root node to the farthest leaf node.

int maxDepth(Node* curNode)
{
	int maxHeight = 1;
	if (curNode == NULL)
	{
		return false;
	}
	else 
	{
		int leftHeight = maxDepth(curNode->left);
		
		int rightHeight = maxDepth(curNode->right);
		cout << "LeftHeight :" << leftHeight << endl;
		cout << "rightHeight :" << rightHeight << endl;
		maxHeight+= max(leftHeight, rightHeight) ;
		return maxHeight;
	}
}

//Finding the minimum value in the binary tree
int minValue(Node* curNode)
{
	
	while (curNode->left!= NULL)
	{
		curNode = curNode->left;

	}
	return curNode->data;
}

//Finding the maximum value in the binary tree

int maxValue(Node *curNode)
{
	while (curNode->right != NULL)
	{
		curNode = curNode->right;
	}
	return curNode->data;


}


//Traversing the binary tree in BFS mode
void breadthFirstSearch(Node* curNode)
{
	if (curNode == NULL)	
	{
		return;
	}
	queue <Node*> q;
	q.push(curNode);
	while (!q.empty())
	{
		curNode = q.front();
		cout << curNode->data << " ";
		if (curNode->left != NULL)
		{
			q.push(curNode->left);
		}
		if (curNode->right != NULL)
		{
			q.push(curNode->right);
		}
		q.pop();
	}
}
/*Change a tree so that the roles of the left and right pointers are swapped at every node.
 So the tree... 
       4 
      / \ 
     2   5 
    / \ 
   1   3

 is changed to... 
       4 
      / \ 
     5   2 
        / \ 
       3   1*/
void mirror(Node* curNode)
{
	if (curNode == NULL) {
		return;
	} else
	{
		Node* temp = curNode->left;
		curNode->left = curNode->right;
		curNode->right = temp;

		cout << curNode->data << " ";
		mirror(curNode->left);
		mirror(curNode->right);
	}
	
}

/*Given a binary tree and a sum, return true if the tree has a root-to-leaf path such that adding up all the values along the path equals the given sum. 
Return false if no such path can be found.*/

bool hasPathSum(Node* curNode, int sum)
{
	if (curNode == NULL)
	{
		return(sum == 0);
	}

	else {

		 int s = sum - curNode->data;

		 
		 bool left = hasPathSum(curNode->left, s);
		 bool right= hasPathSum(curNode->right, s);

		 return left || right;


	
	
	
	}

}



int main()
{
	Node *rootPtr = NULL;
	int data[] = { 9, 3, 13, 1, 7, 6, 12, 15, 20, 25 };
	int length = sizeof(data) / sizeof(int);
	for (int i = 0; i < length; i++)
	{
		insert(data[i], rootPtr);
	}
	
	int choice;
	while (true)
	{
		
		cout << "\n1. PreOder Traversal\n 2. InOrder Traversal \n 3. PostOrder Traversal \n " << endl;
		cout << "4. Search Node \n 5. Count Nodes in Tree \n 6. Find Maximum Depth \n " << endl;
		cout << "7. Find Minimum Value Node in tree \n 8. Find Maximum Value Node in tree \n 9. BreadthFirstSearch Traversal\n" << endl;
		cout<<"10. Mirror\n  11.Find a path which has the given sum \n12. Exit\n"<<endl;
		cout << "Enter your choice : ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			// Print the Tree Preorder
			cout << "\nPrint Preorder Traversal: ";
			printTreePreorder(rootPtr);
			break;

		case 2:
			// Print the Tree InOrder
			cout << "\nPrint InOrder Traversal: ";
			printTreeInOrder(rootPtr);

			break;

		case 3:
			// Print the Tree PostOrder
			cout << "\nPrint PostOrder Traversal: ";
			printTreePostOrder(rootPtr);

			break;

		case 4:
			cout << endl;
			//Searching a node in binary tree
			cout << "Enter the number to be searched\n";
			int num;
			cin >> num;
			searchTree(num, rootPtr) ? cout << "Found\n" : cout << "Not Found\n";

			break;

		case 5:
			//Counting the number of nodes in tree
			cout << "The number of nodes in a binary tree is : " << binaryTreeSize(rootPtr) << endl;
			break;

		case 6:
			// Finding the max depth or longest path from root node to the farthest leaf node.
			cout << "The max depth in binary tree is : " << maxDepth(rootPtr) << endl;
			break;

		case 7:
			//Finding the minimum value in the binary tree
			cout << "The Minimum value in the binary tree is :" << minValue(rootPtr) << endl;
			break;

		case 8:
			//Finding the minimum value in the binary tree
			cout << "The Maximum value in the binary tree is :" << maxValue(rootPtr) << endl;
			break;

		case 9:
			//Traversing the binary tree in BFS mode
			breadthFirstSearch(rootPtr);
			break;

		case 10:
			// Create Mirror
			mirror(rootPtr);
			break;

		case 11:
		    cout<< hasPathSum(rootPtr, 13);
			break;

		case 12:
			exit(0);
			break;
		}
	}
	return 0;
}


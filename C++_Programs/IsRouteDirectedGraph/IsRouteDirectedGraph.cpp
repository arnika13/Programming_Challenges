#include<iostream>
#include<stack>

#define NUM_OF_VERTICES 5
using namespace std;

class Graph
{
	bool a[NUM_OF_VERTICES][NUM_OF_VERTICES];

public:
	Graph() // default constructor
	{
		for (auto i = 0; i < NUM_OF_VERTICES; i++)
		{
			for (auto j = 0; j < NUM_OF_VERTICES; j++)
			{
				a[i][j] = false;
			}
		}
	}
	void printGraph() // member function to print the graph
	{
		for (auto i = 0; i < NUM_OF_VERTICES; i++)
		{
			for (auto j = 0; j < NUM_OF_VERTICES; j++)
			{
				cout << a[i][j] << " ";
			}
			cout << "\n";
		}
		cout << "\n";
	}

	void createGraph() // member function to create the graph
	{
		a[0][1] = true;  // v1 to v2
		a[0][3] = true;  // v1 to v4
		a[1][2] = true;  // v2 to v3
		a[1][3] = true;  // v2 to v4
	}

	void addEdge(int src, int dest)
	{
		a[src][dest] = true;
	}

	void removeEdge(int src, int dest)
	{
		a[src][dest] = false;
	}

	bool isPath(int src, int dest)
	{
		stack<int> s;
		bool visited[NUM_OF_VERTICES] = { false };

		// Step 1: Start with the source Vertex and set its visited to True
		visited[src] = true;

		// Step 2: Find adjacent vertices from Src at outgoing edge. Check if adjacent vertex is equal to destination and push into the stack and set 
		// corresponding visited vertex to true
		s.push(src); // first push the src node inorder to go inside while loop
		int currentVertex; // to store the pushed vertex 
		while (!s.empty()) // if stack is not empty then pop the top of the stack and goto step2.
		{
			// Pop the top of stack
			currentVertex = s.top(); 
			s.pop();
			for (int i = 0; i < NUM_OF_VERTICES; i++)
			{
				bool isAdjacent = a[currentVertex][i]; // store  the adjacent vertex bool value in isAdjacent . 
				if (isAdjacent)
				{
					if (i == dest)
					{
						return true;
					}
					else
					{
						if (!visited[i]) 
						{
							s.push(i);
							visited[i] = true;
						}
					}
				}
			}
		}
		return false;
	}
		

};

void printResult(bool actualResult, bool expectedResult)
{
	if (actualResult == expectedResult)
	{
		cout << "Test Passed" << endl;
	}
	else
	{
		cout << "Test Failed" << endl;
	}
}

void main()
{
	Graph p;
	p.printGraph();
	//p.createGraph();
	p.addEdge(0, 1);
	p.addEdge(0, 3);
	p.addEdge(1, 2);
	p.addEdge(1, 3);

	p.printGraph();
	p.removeEdge(1, 3);
	p.printGraph();
	bool actualResult, expectedResult;

	// Test Case: 1
	printResult(p.isPath(0, 2), true); // Is there a path from v1 to to v3

	// Test Case: 2 
	printResult(p.isPath(2, 3), false); // Is there a path from v3 to to v4

	// Test Case: 3
	printResult(p.isPath(1, 0), false); // Is there a path from v2 to v1

	// Test Case: 4
	printResult(p.isPath(3, 0), false); // Is there a path from v4 to v1

	// Test Case: 5
	printResult(p.isPath(0, 3), true); // Is there a path from v1 to v4
}

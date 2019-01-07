
/*Creating a directed graph */

#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Vertex {
	int data;
	string name;
	vector<Vertex *> edge; //we created a vector of type vertex* As we need to craete a directed graph so, one vertex pointing to other vertex has to store address of another one in order to create a directed path.

	public:
		Vertex(int d, string str) :data(d), name(str) {	}
		
		// adding edges to the vertex of the graph, 
		//V is a pointer type object of Vertex class which stores the address of the next vertex thats how we create a directed graph
		void addEdge(Vertex* V);
		void printEdge();
		int getData() 
		{ 
			return data;
			
		}
		

};

void Vertex::addEdge(Vertex* V)
{
	edge.push_back(V);	// adding the edges from one vertex to another vertex
}

void Vertex::printEdge()
{
	for (auto it = edge.begin(); it < edge.end(); it++)
	{
		Vertex* s = *it; //we can't dereference the data by *it, as the type of data we r pusing to the vector is vertex* type that's why we need to create a variable of type vertex*

		//cout << this->data << "-->"<< s->getData()<< endl; // this->data will result the value of data of the called vertex i.e v1.printEdge(), s->data or getData() will result the data stored in the pushed vertex of v1 & v2 i.e v2,v3,v4
		cout << this->name << "-->" << s->name << endl; // adding a name to the vertex
	}
}


void main()
{

	Vertex v1(2,"a");
	Vertex v2(4,"b");
	Vertex v3(5,"c");
	Vertex v4(7,"d");

	v1.addEdge(&v2); //adding edge from v1 to v2 
	v1.addEdge(&v4); //adding edge from v1 to v4
	v2.addEdge(&v4); //adding edge from v2 to v4
	v2.addEdge(&v3); //adding edge from v1 to v3

	v1.printEdge(); // calling the printEdge of v1 vertex
	v2.printEdge(); // calling the printEdge of v2 vertex

}

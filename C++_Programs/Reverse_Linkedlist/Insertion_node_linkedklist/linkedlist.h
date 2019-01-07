#pragma once
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

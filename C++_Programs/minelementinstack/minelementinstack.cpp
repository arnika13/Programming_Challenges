#include<iostream>
#include<string>
#include<limits>
#define STACK_SIZE 5
using namespace std;

class Stack
{
	int arr[STACK_SIZE];
	int top;
	int minElement;

public:
	Stack();
	bool is_empty();
	void push(int element);
	int pop();
	int available_space();
	void print();
	void getMin();

};

Stack::Stack()
{
	top = 0;
}
bool Stack::is_empty()
{
	if (top == 0)
	{
		cout << "The stack is empty\n";
		return true;

	}
	else
	{
		cout << "The Stack is not empty\n";
		return false;
	}
}

void Stack::push(int element)
{
	minElement = INT_MAX;
	if (top == STACK_SIZE)
	{
		cout << "The stack is full you cannot add elements\n";
		return;
	}
	else
	{
		arr[top] = element;
		cout << "The pushed element is : " << arr[top] << endl;
		top++;
		
		if (element < minElement)
		{
			minElement = element;
		}
	
	}
}

int Stack::pop()
{
	// First check if the stack is empty
	if (top == 0)
	{
		cout << "The stack is empty you cannot pop\n";
		return 0;
	}
	else
	{

		top--;
		cout << "Pop the element  " << arr[top] << endl;


	}
}

int Stack::available_space()
{
	int x = STACK_SIZE - top;
	cout << "The available space in the stack is : " << x << "\n";
	return x;
}

void Stack::print()
{
	int i = 0;
	cout << "Stack :" << endl;
	for (i = 0; i < STACK_SIZE; i++)
		cout << arr[i] << endl;
}

void Stack:: getMin()
{
	if (is_empty())
		cout << "Stack is empty\n";

	
	else
		cout << "Minimum Element in the stack is: " << minElement << "\n";
}



void main()
{
	Stack s;
	s.push(10);
	
	s.is_empty();

	
	
	s.available_space();
	s.push(10);
	s.push(2);
	s.push(3);
	s.getMin();
	s.pop();
	s.push(4);
	
	s.push(5);
	s.push(7);
	s.print();
	s.available_space();
}

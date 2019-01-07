#include<iostream>
#include<stack>
#include<limits>
using namespace std;

class Stack {
	
public:
	stack<int> s;
	int minElement = INT_MAX;

	void add(int n) {
		
		 s.push(n);


		if (n < minElement)
		{
			minElement = n;
		}

		

	}

	void Stack:: remove()
	{
		s.pop();
	
	}

	void Stack:: min()
	{

		cout <<"The minimum element in the stack is : " <<minElement<<endl;

	}
	
};


void main()
{
	Stack s;
	s.add(2);
	
	s.add(3);
	s.add(4);
	s.add(1);
	s.min();
	s.remove();
	s.min();

	
	


}
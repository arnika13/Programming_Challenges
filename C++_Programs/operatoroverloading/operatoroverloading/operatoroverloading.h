#pragma once
#include <iostream>
using namespace std;
class MyNewDataType
{
	int x;

public:
	MyNewDataType()  // Constructor
	{
		x = 5;
	}

	void print()
	{
		cout << x << endl;
	}

	void setvalue(int a)
	{
		x = a;
	}

	void operator-()
	{
		cout << "I am inside operator-()? Why did you call me?" << endl;
	}

	MyNewDataType operator+(MyNewDataType o)
	{
		int t = x * o.x;    // obj1.x + obj2.x

		MyNewDataType tempObj;
		tempObj.x = t;

		return tempObj;
	}

	friend ostream& operator<<(ostream&, const MyNewDataType&);
};


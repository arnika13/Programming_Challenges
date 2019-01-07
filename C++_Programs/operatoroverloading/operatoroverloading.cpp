#include "operatoroverloading.h"

ostream& operator<<(ostream& os, const MyNewDataType& o)
{
	os << o.x<<" ";
	return os;
}


int main()
{
	MyNewDataType obj1, obj2, obj3;   // Create object of type MyNewDataType
	obj1.setvalue(10);
	obj2.setvalue(20);

	obj3 = obj1 + obj2;	// obj3 = obj1.operator+(obj2);

	std::cout << obj1;
	return 0;
}


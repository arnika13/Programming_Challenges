#include <iostream>
#include <vector>
using namespace std;

void vector_constructor()
{
	vector<int> v1(4, 10); // 4 vectors of type integer and assigns each with a value of 10
	vector<int> v2(v1.begin(), v1.end()); // range constructor, begin returns a iterator pointing to the first element of the vector
	vector<int> v3(v2); // copy constructor
	for (int i = 0; i < v3.size(); i++)
	{

		cout << "v3 : " << v3[i] << endl;
	}
}

void vector_functions()
{
	
	
	vector<int> v1;
	vector<int> v2 = {1,2,3,4,5,6,7};
	
	v1.assign(5,50); //assign() assign new value to the vector elements by replacing old ones
	for (int i = 0; i < v1.size(); i++)
	{
		cout << "V1 vector assigns value :" << v1[i] << endl;

		//at() returns the reference to the element present at location n in the vector.
		cout << "V1 vector value using at(): " << v1.at(i) << endl;
	}

	// returns a reference to the last element of the vector
	cout << "Last element of the vector is :" << v2.back() << endl;
	cout << "Capacity of vector v1 :" << v2.capacity() << endl;

	//erase() erase the single element from the vector

	v2.erase(v2.begin());
	for (auto it = v2.begin(); it != v2.end(); it++)
	{
		cout << "vector v2 after earsing one element :" << *it << endl;
	}
	
	//front() returns the reference to the first element of the vector.

	cout << " First element of vector = " << v2.front() << endl;

	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
		cout << v[i]<<endl;
	}

	
}




void  main()
{
	vector_constructor();
	vector_functions();

}
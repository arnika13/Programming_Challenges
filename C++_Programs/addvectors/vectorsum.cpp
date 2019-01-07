#include<iostream>
#include<vector>
#include<ctime>


using namespace std;
void printVector(vector<int> v)
{
	int size = v.size();
	for (int i = 0; i < size; i++)
	{
		cout << v[i] << " ";
	}
}

int main()
{
	vector<int> a,b;
	long int numberOfElements = 10000000;

	vector<int> c(numberOfElements);

	// Vector a
	for (int i = 0; i < numberOfElements; i++)
	{
		a.push_back(i+1);
	}

	// Vector b
	for (int i = 0; i < numberOfElements; i++)
	{
		b.push_back(numberOfElements +i);
	}

	// Add a and b vectors
	// Start Time
	time_t start = time(0);

	for (int i = 0; i < numberOfElements; i++)
	{
		c[i] = a[i] + b[i];
	}
	// End time
	time_t end = time(0);
	double timeElapsed = difftime(end, start);

	// Print vector c
	// printVector(c);

	// Print timeElapsed
	cout << "Time Elapsed = " << timeElapsed << " seconds." << endl;
	return 0;

}


#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>

using namespace std;

// Complete the averageOfTopEmployees function below.
void averageOfTopEmployees(vector<int> rating) {
	float total = 0;
	int count = 0;
	for (auto it = rating.begin(); it != rating.end(); it++)
	{
		if (*it >= 90)
		{
			total += *it;
			count++;
		}

	}

	float avg = total / count;
	avg = roundf(avg * 100) / 100;
	std::cout << std::setprecision(2) << fixed << avg;
}

int main()
{
	vector<int> ratings = { 5,23,90,91,92,95,98 };

	averageOfTopEmployees(ratings);
	//float val = 93.344;
	//float nearest = roundf(val * 100) / 100;
	//std::cout << std::setprecision(2) << fixed << nearest << '\n';
}

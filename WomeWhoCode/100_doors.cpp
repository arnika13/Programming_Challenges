#include<iostream>
using namespace std;

void door()
{
	int square = 1, increment = 3;
	for (int door = 1; door <= 100; ++door)
	{
		std::cout << "door #" << door;
		if (door == square)
		{
			cout << " is open." << std::endl;
			square += increment;
			increment += 2;
		}
		else
			cout << " is closed." << std::endl;
	}
	
}

int main()
{
	door();

}
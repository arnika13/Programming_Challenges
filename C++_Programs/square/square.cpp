#include <iostream>
#include <cstdlib>

int main(int argc, char *argv[])
{
	int num = atoi(argv[1]);
	std::cout << num * num << std::endl;
	return 0;
}
#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
	std::vector<int> v = { 5, 3 };
	std::stable_partition(v.begin(), v.end(), [](int x) { return x != 5;  });
	std::copy(v.begin(), v.end(), std::ostream_iterator<typename std::vector<int>::value_type>(std::cout, " "));
}

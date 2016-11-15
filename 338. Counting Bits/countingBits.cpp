#include <iostream>
#include <vector>
#include "CountingBits.h"

int main()
{
	Solution instance;
	std::vector<int> ivec(instance.countBits(4));
	for (auto item: ivec)
	{
		std::cout << item << std::endl;
	}
	return 0;
}

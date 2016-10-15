#ifndef COUNT_BITS_H
#define COUNT_BITS_H

#include <vector>

class Solution
{
public:
	std::vector<int> countBits(int num)
	{
		std::vector<int> result;
		result.push_back(0);
		for (auto i = 1; i <= num; ++i)
			result.push_back(result[i >> 1] + (i & 1));
		return result;
	}
};


#endif	

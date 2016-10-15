#ifndef REVERSE_STRING_H
#define REVERSE_STRING_H

#include <string>
#include <algorithm>

class Solution
{
public:
	std::string reverseString(std::string s)
	{
		std::string reversedStr(s.rbegin(), s.rend());
		return reversedStr;
	}
};


#endif

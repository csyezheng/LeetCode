#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include "fizzBuzz.h"

using namespace std;

int main()
{
	Solution instance;
	vector<string> svec = instance.fizzBuzz(15);
	std::for_each(svec.cbegin(), svec.cend(),
			[](const string &item) { cout << item << endl; });
	return 0;
}

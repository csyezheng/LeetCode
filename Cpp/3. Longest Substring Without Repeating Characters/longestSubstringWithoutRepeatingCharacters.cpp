//
// Created by ye on 1/30/18.
//

#include <string>
#include <iostream>
#include <cassert>
#include "LongestSubstringWithoutRepeatingCharacters .h"

using namespace std;


int main()
{
    string input("abcabcbb");
    int target = 3;
    auto sol = Solution();
    int ret = sol.lengthOfLongestSubstring(input);
    assert(ret==target);
}
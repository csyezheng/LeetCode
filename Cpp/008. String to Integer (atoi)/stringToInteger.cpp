//
// Created by ye on 1/30/18.
//

#include <string>
#include <cassert>
#include "StringToInteger.h"


using namespace std;


int main()
{
    string input("  23fc");
    int target = 23;
    auto sol = Solution();
    auto ret = sol.myAtoi(input);
    assert(ret==target);
}
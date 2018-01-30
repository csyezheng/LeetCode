//
// Created by ye on 1/29/18.
//

#include <iostream>
#include <vector>
#include <cassert>
#include "TwoSum.h"


using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    auto sol = Solution();
    int target = 6;
    auto ret = sol.twoSum(nums, target);

    // assert(ret==vector<int>{2, 4});
    vector<int> result = {1, 3};
    assert(ret==result);
}

//
// Created by ye on 1/30/18.
//


#include <iostream>
#include <vector>
#include <cassert>
#include "3Sum.h"


using namespace std;


int main()
{
    vector<int> input = {-1, 0, 1, 2, -1, -4};
    auto sol = Solution();
    auto ret = sol.threeSum(input);

    vector<vector<int>> result;
    result.push_back(vector<int>{-1, -1, 2});
    result.push_back(vector<int>{-1, 0, 1});

    assert(ret==result);
}
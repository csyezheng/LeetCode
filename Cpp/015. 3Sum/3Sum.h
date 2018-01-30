//
// Created by ye on 1/30/18.
//

#ifndef LEETCODE_3SUM_H
#define LEETCODE_3SUM_H


#include <vector>
#include <iterator>
#include <algorithm>


class Solution {
public:
    std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
        std::vector<std::vector<int>> result;
        std::sort(nums.begin(), nums.end());
        for (auto first = nums.cbegin(); first != nums.cend(); ++first) {
            auto second = std::next(first), third = std::prev(nums.cend());
            int target = -*first;
            if (target < 0)
                break;
            while (second < third) {
                int sum = *second + *third;
                if (sum < target)
                    ++second;
                else if (sum > target)
                    --third;
                else {
                    std::vector<int> sol = {*first, *second, *third};
                    result.push_back(sol);
                    while (second < third && *second == sol[1])
                        ++second;
                    while (second < third && *third == sol[2])
                        --third;
                }
            }
            while (next(first) != nums.cend() && *next(first) == *first)
                ++first;
        }
        return result;
    }
};


#endif //LEETCODE_3SUM_H

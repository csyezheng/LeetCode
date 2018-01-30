//
// Created by ye on 1/29/18.
//

#ifndef LEETCODE_TWOSUM_H
#define LEETCODE_TWOSUM_H

#include <vector>


class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::vector<int> ret;
        if (nums.size() < 2)
            return ret;
        for (auto first = 0; first != nums.size(); ++first){
            for (auto second = first + 1; second != nums.size(); ++second) {
                if (nums[first] + nums[second] == target) {
                    ret.push_back(first);
                    ret.push_back(second);
                    break;
                }
            }
        }
        return ret;
    }
};


#endif //LEETCODE_TWOSUM_H

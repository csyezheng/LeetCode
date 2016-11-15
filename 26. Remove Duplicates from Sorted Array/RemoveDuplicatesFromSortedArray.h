/*
26. Remove Duplicates from Sorted Array

Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.

Do not allocate extra space for another array, you must do this in place with constant memory.

For example,
Given input array nums = [1,1,2],

Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively. It doesn't matter what you leave beyond the new length.
*/

#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        if(nums.empty())
            return 0;
        int cnt = 1;
        auto left = nums.begin(), curr = nums.begin();
        for (/* empty */; curr != nums.end(); ++curr){
            if (*curr != *left){
                *++left = *curr;
                ++cnt;
            }
        }
        while (curr - left > 1){
            nums.pop_back();
            --curr;
        }
        return cnt;
    }
};



/*
27. Remove Element
Given an array and a value, remove all instances of that value in place and return the new length.

Do not allocate extra space for another array, you must do this in place with constant memory.

The order of elements can be changed. It doesn't matter what you leave beyond the new length.

Example:
Given input array nums = [3,2,2,3], val = 3

Your function should return length = 2, with the first two elements of nums being 2.
*/

#include <vector>


class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        if (nums.empty()) return 0;
        for (auto curr = nums.begin(); curr + 1 != nums.end(); )
        {
            if (*(curr + 1) == val) {
                nums.erase(curr + 1);
            }
            else {
                curr++;
            }
        }
        auto beg = nums.begin();
        if (*beg == val) {
            nums.erase(beg);
        }
        return nums.size();
    }
};

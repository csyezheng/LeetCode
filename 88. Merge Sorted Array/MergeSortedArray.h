/*
88. Merge Sorted Array  
Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.

Note:
You may assume that nums1 has enough space (size that is greater or equal to m + n) to hold additional elements from nums2. The number of elements initialized in nums1 and nums2 are m and n respectively.
*/

#include <vector>

class Solution {

public:

    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {

        int indexNums1 = m - 1, indexNums2 = n - 1, indexCurr = m + n - 1;

        while (indexNums1 >= 0 && indexNums2 >= 0){

            if (nums1[indexNums1] <= nums2[indexNums2])

                nums1[indexCurr--] = nums2[indexNums2--];

            else

                nums1[indexCurr--] = nums1[indexNums1--];

        }

        while(indexNums2 >= 0){

            nums1[indexCurr--] = nums2[indexNums2--];

        }

    }

};

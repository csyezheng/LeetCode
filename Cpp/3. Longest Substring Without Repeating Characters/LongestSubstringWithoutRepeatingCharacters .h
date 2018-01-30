//
// Created by ye on 1/30/18.
//

#ifndef LEETCODE_LONGESTSUBSTRINGWITHOUTREPEATINGCHARACTERS_H
#define LEETCODE_LONGESTSUBSTRINGWITHOUTREPEATINGCHARACTERS_H


#include <string>
#include <set>

class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        int len = 0;
        for (auto first=s.cbegin(); first!=s.cend(); ++first) {
            std::set<char> cset = {*first};
            for (auto last=std::next(first); last!=s.cend(); ++last) {
                auto iter = cset.find(*last);
                if (iter == cset.end()) {
                    cset.insert(*last);
                } else
                    break;
            }
            if (len < cset.size())
                len = cset.size();
            cset.clear();
        }
        return len;
    }
};

#endif //LEETCODE_LONGESTSUBSTRINGWITHOUTREPEATINGCHARACTERS_H

//
// Created by ye on 1/30/18.
//

#ifndef LEETCODE_STRINGTOINTEGER_H
#define LEETCODE_STRINGTOINTEGER_H

#include <cctype>
#include <string>
#include <limits.h>

class Solution {
public:
    int myAtoi(std::string str) {
        int sum = 0;
        auto beg=str.cbegin();
        while (beg!= str.cend() && std::isspace(*beg))
            ++beg;

        int sign = 1;
        if (*beg == '+')
            ++beg;
        else if (*beg == '-') {
            sign = -1;
            ++beg;
        }

        for (; beg!= str.cend(); ++beg) {
            if (!std::isdigit(*beg))
                break;
            if (sum >  INT_MAX / 10 || (sum == INT_MAX / 10 && *beg - '0' > 7)) {
                if (sign==1)
                    return INT_MAX;
                else
                    return INT_MIN;
            }
            // convert to ASCII
            sum = sum * 10 + (*beg - '0');
        }

        return sum * sign;
    }
};


#endif //LEETCODE_STRINGTOINTEGER_H

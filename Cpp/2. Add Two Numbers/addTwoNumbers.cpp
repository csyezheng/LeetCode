//
// Created by ye on 1/29/18.
//

#include <iostream>
#include <cassert>
#include "AddTwoNumbers.h"

using namespace std;


int conver(ListNode *input)
{
    int base = 1, sum = 0;
    while (input) {
        sum += input->val * base;
        base *= 10;
        input = input->next;
    }
    return sum;
}

int main()
{
    ListNode listOne = ListNode(2);
    ListNode second = ListNode(4);
    ListNode third = ListNode(3);
    listOne.next = &second;
    second.next = &third;

    ListNode listTwo = ListNode(5);
    ListNode fifth = ListNode(6);
    ListNode sixth = ListNode(4);
    listTwo.next = &fifth;
    fifth.next = &sixth;

    int target = 807;
    auto sol = Solution();
    auto retList = sol.addTwoNumbers(&listOne, &listTwo);
    int result = conver(retList);

    assert(result==target);
}
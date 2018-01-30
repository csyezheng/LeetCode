//
// Created by ye on 1/30/18.
//

#include <iostream>
#include <cassert>
#include <vector>
#include "RemoveNthNodeFromEndofList.h"

using namespace std;

int main()
{
    ListNode first = ListNode(1);
    ListNode second = ListNode(2);
    ListNode third = ListNode(3);
    ListNode fourth = ListNode(4);
    ListNode fifth = ListNode(5);
    first.next = &second;
    second.next = &third;
    third.next = &fourth;
    fourth.next = &fifth;
    vector<int> target = {1, 2, 3, 5};

    auto sol = Solution();
    auto head = sol.removeNthFromEnd(&first, 2);
    vector<int> result;
    while (head) {
        result.push_back(head->val);
        head = head->next;
    }

    assert(result==target);

}
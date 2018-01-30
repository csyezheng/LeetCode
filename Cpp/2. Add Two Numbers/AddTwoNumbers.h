//
// Created by ye on 1/29/18.
//

#ifndef LEETCODE_ADDTWONUMBERS_H
#define LEETCODE_ADDTWONUMBERS_H



struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode head(0);
        ListNode* p = &head;
        unsigned extra = 0;
        while (l1 || l2 || extra){
            int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + extra;
            extra = sum / 10;
            p->next = new ListNode(sum % 10);
            p = p->next;
            l1 = l1 ? l1->next : l1;
            l2 = l2 ? l2->next : l2;
        }
        return head.next;
    }
};



#endif //LEETCODE_ADDTWONUMBERS_H

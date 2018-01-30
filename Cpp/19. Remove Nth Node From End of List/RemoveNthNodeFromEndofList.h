//
// Created by ye on 1/30/18.
//

#ifndef LEETCODE_REMOVENTHNODEFROMENDOFLIST_H
#define LEETCODE_REMOVENTHNODEFROMENDOFLIST_H



struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};



class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (!head || !n)
            return nullptr;
        ListNode dummy = ListNode(0);
        dummy.next = head;
        ListNode *fast = &dummy, *slow = &dummy;
        while (n--)
            fast = fast->next;
        while (fast->next) {
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        return dummy.next;
    }
};



#endif //LEETCODE_REMOVENTHNODEFROMENDOFLIST_H

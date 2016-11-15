/*
234. Palindrome Linked List
Given a singly linked list, determine if it is a palindrome.
*/



struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(nullptr) {}
 };


class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return true;
        ListNode *fast = head;
        ListNode *slow = head;
        while (fast->next != nullptr && fast->next->next != nullptr){
            fast = fast->next->next;
            slow = slow->next;
        }
        slow->next = reverse(slow->next);
        ListNode* right = slow->next;
        while (right != nullptr){
            if (head->val != right->val)
                return false;
            else{
                head = head->next;
                right = right->next;
            }
        }
    }
    ListNode *reverse(ListNode *head){
        ListNode *pre = nullptr;
        ListNode *next = nullptr;
        while(head != nullptr){
            next = head->next;
            head->next = pre;
            pre = head;
            head = next;
        }
        return pre;
    }
};

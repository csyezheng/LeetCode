#include "PalindromeLinkedList.h"
#include <iostream>

int main()
{
    ListNode one(1);
    ListNode two(0);
    ListNode three(1);
    
    one.next = &two;
    two.next = &three;

    Solution instance;
    bool ret = instance.isPalindrome(&one);      
    
}

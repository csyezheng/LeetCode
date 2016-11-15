#include "ValidPalindrome.h"
#include <iostream>

using namespace std;

int main()
{
    Solution instance;
    string test("a b cc b . a");
    bool ret = instance.isPalindrome(test);
    if (ret)
        cout << "the string is palindrome" << endl;
    else
        cout << "the string isn't palindrome" << endl;
    return 0;
}

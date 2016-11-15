#include "RemoveDuplicatesFromSortedArray.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    Solution instance;
    vector<int> ivec{ 0, 1, 1, 3, 3, 3, 5, 8, 8 };
    auto ret = instance.removeDuplicates(ivec);
    cout << ret << endl;
    for (const auto &item: ivec)
    {
        cout << item << " ";
    }
    cout << endl;
}

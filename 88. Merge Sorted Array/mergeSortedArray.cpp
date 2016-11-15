#include "MergeSortedArray.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    Solution instance;
    vector<int> vec1 = { 0, 0, 5, 0, 0, 0 };
    vector<int> vec2 = { -1, 0, 3 };
    instance.merge(vec1, 3, vec2, 3);
    for (const auto &item: vec1)
    {
        cout << item << " ";
    }
    cout << endl;
    return 0;
}

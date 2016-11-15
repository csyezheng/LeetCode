#include "MoveZeroes.h"
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> vec = { 0, 1, 0, 3, 12 };
    Solution instance;
    instance.moveZeroes(vec);
    for (const auto &item: vec)
    {
        cout << item << endl;
    }
    return 0;
}

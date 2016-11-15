#include "RemoveElement.h"
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> vec {0, 4, 1, 4, 0 };
    Solution instance;
    cout << instance.removeElement(vec, 4) << endl;
    return 0;
}

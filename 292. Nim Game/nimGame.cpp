#include "NimGame.h"
#include <iostream>

using namespace std;

int main()
{
    Solution instance;
    bool result = instance.canWinNim(10);
    if (result)
        cout << "Nim will win" << endl;
    else
        cout << "Nim can't win" << endl;
}


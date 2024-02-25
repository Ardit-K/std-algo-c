#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

int main()
{
    vector nums{1, 2, 3, 4, 5, 6, 7};
    auto doubleNum = [](int n){cout << n*2 << endl;};
    for_each(begin(nums), end(nums), doubleNum);
    return 0;
}
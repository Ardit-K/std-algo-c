#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;

int main()
{
    vector nums{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto sum = accumulate(begin(nums), end(nums), 0);
    cout << "Sum of array contents: " << sum << endl;
    return 0;
}
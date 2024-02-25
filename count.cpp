#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector nums{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto isEven = [](int n){return n%2 == 0;};
    auto isOdd = [](int n){return n%2 == 1;};
    int even_count = count_if(begin(nums), end(nums), isEven);
    int odd_count = count_if(begin(nums), end(nums), isOdd);
    cout << "Even nums: " << even_count << endl;
    cout << "Odd nums: " << odd_count << endl;
    return 0;
}
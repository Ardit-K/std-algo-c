#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
Author: Ardit Koti
Email: arditkoti7192@gmail.com
*/

int main()
{
    vector<int> nums{1, 2, 3, 4, 5, 6, 7};
    auto isEven = [](int n){return n%2 == 0;};
    // Finds first even number in collection
    auto it = find_if(begin(nums), end(nums), isEven);
    cout << "First even number in vector: " << *it << endl;
    return 0;
}
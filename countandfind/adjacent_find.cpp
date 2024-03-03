#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> nums{1, 1, 2, 2, 3, 4, 5};
    auto isEqualAndEven = [](int n1, int n2){return n1==n2 && n1%2==0 && n2%2==0;};
    auto it = adjacent_find(begin(nums), end(nums), isEqualAndEven);
    cout << "First Even pair: " << *it << ", " << *(it+1) << endl;
    return 0;
}
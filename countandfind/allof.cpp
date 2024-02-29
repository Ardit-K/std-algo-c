#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> nums{2, 4, 6, 8, 10, 11};
    auto isEven = [](int n){return n%2==0;};
    if (all_of(begin(nums), end(nums), isEven)){
        cout << "All ints in nums collection are even." << endl;
    }
    else{
        cout << "There is at least one odd int in nums collection." << endl;
    }
    return 0;
}
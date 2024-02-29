#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> nums{2, 4, 6, 7};
    auto isEven = [](int n){return n%2==0;};
    auto isOdd = [](int n){return n%2==1;};
    if(any_of(begin(nums), end(nums), isEven))
    {
        cout <<"There is at least one even number in nums." << endl;
    }
    if(any_of(begin(nums), end(nums), isOdd)){
        cout <<"There is at least one odd number in nums." << endl;
    }
    return 0;
}
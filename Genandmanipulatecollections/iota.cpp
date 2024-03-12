#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    int nums[10];
    iota(begin(nums), end(nums), 0);
    cout << "List made from iota algorithm: " << endl << "(";
    for(int i : nums){
        cout << i << ", ";
    }
    cout << ")" << endl;
    return 0;
}
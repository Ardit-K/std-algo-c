#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> nums{3, 5, 7, 2, 1, 7, 3, 9};
    auto equalsNine = [](int n){return n==9;};
    if(none_of(begin(nums), end(nums), equalsNine)){
        cout << "There are no nines in the nums collection. " << endl;
    }
    else{
        cout << "There is at least one nine in the nums collection. " << endl;
    }
    return 0;
}
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void print_vec(vector<int> v){
    for (int i : v){
        cout << i << ", ";
    }
    cout << endl;
}

int main(){
    vector<int> nums{1, 1, 2, 3, 5, 5, 5, 4, 7};
    cout << "Vector before unique function: " << endl;
    print_vec(nums);

    auto uni = unique(begin(nums), end(nums));
    cout << "Vector after unique function: " << endl;
    print_vec(nums);

    return 0;
}
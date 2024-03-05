#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> nums{1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i;
    cout << "Enter integer to fill collection with: ";
    cin >> i;
    fill(begin(nums), end(nums), i);
    cout << "Collection: ";
    for (int a = 0; a < size(nums); a++){
        cout << nums.at(a) << ", ";
    }
    return 0;
}
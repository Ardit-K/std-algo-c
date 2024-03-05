#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int gen(){
    static int i = 0;
    return ++i;
}

int main(){
    int i;
    // Vector size 10
    vector<int> nums(10);
    generate(begin(nums), end(nums), gen);
    vector<int>::iterator it;
    for(it = begin(nums); it != end(nums); ++it){
        cout << *it << " ";
    }
    return 0;
}
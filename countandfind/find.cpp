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
    auto isEven = [](int n){return n % 2 == 0;};
    int num = 8;
    auto numIt = find(begin(nums), end(nums), num);
    if(*numIt){
        cout << num << " is in the collection. "<< endl;
    }
    else{
        cout << num << " is not in the collection. "<< endl;
    }
    
    // Finds first even number in collection
    auto evenIt = find_if(begin(nums), end(nums), isEven);
    cout << "First even number in vector: " << *evenIt << endl;
    
    // Finds first odd number in collection
    auto oddIt = find_if_not(begin(nums), end(nums), isEven);
    cout << "First odd number in vector: " << *oddIt << endl;
    return 0;
}
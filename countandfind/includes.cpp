#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> v1{1, 2, 3, 4, 5, 6};
    vector<int> v2{4, 5, 6};
    cout << "Includes: " << includes(begin(v1), end(v1), begin(v2), end(v2)) << endl;
    return 0;
}
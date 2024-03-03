#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


string mirror(const string& s){
    return string(s.begin(),
    mismatch(s.begin(), s.end(), s.rbegin()).first);
}

int main(){
    cout << mirror("ab3445ba") << endl <<
    mirror("adea") << endl <<
    mirror("ada") << endl; 
    return 0;
}
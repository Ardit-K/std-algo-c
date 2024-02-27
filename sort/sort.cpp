#include <iostream>
#include <algorithm>
using namespace std;



int main()
{
    vector nums{4, 7, 5, 8, 4, 2, 2, 3, 1, 8, 9};
    cout << "Starting array: ";
    for(int i =0; i < nums.size(); i++)
    {
        cout << nums.at(i) << ", "; 
    }
    cout << endl;
    sort(begin(nums), end(nums));
    cout << "Sorted array: ";
    for(int i =0; i < nums.size(); i++)
    {
        cout << nums.at(i) << ", "; 
    }
    return 0;
}
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
    vector nums{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    // Checks if n is odd or even
    auto isEven = [](int n){return n%2 == 0;};
    auto isOdd = [](int n){return n%2 == 1;};
    // Counts number of odd and even numbers
    int even_count = count_if(begin(nums), end(nums), isEven);
    int odd_count = count_if(begin(nums), end(nums), isOdd);
    cout << "Even nums: " << even_count << endl;
    cout << "Odd nums: " << odd_count << endl;

    // Counts how many nums are equal to 3 in vector
    int threes = count(begin(nums), end(nums), 3);
    cout << "# of threes in vector: " << threes << endl;
    return 0;
}
// Given an integer, write a function to determine if it is a power of two.

// Example 1:

// Input: 1
// Output: true 
// Explanation: 20 = 1
// Example 2:

// Input: 16
// Output: true
// Explanation: 24 = 16
// Example 3:

// Input: 218
// Output: false


#include <iostream>

using namespace std;

bool isPowerOfTwo(int n);

int main(){
    cout << boolalpha << isPowerOfTwo(9);
    return 0;
}

bool isPowerOfTwo(int n) {
    if(n == INT_MAX || n == INT_MIN) return false;
    return n && (!(n&n-1));
}
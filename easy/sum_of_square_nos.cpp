// Given a non-negative integer c, your task is to decide whether there're two integers a and b such that a2 + b2 = c.

// Example 1:

// Input: 5
// Output: True
// Explanation: 1 * 1 + 2 * 2 = 5
 

// Example 2:

// Input: 3
// Output: False

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    return 0;
}

bool judgeSquareSum(int c) {
       int left = 0;
       int right = sqrt(c) + 1;

       while(left <= right) {
           long long sum = left*left + right*right;
           if(sum == c){
               return true;
           }
           else if(sum > c) {
               right -= 1;
           }
           else {
               left += 1;
           }
       }
       return false;
}
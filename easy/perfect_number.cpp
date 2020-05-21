// We define the Perfect Number is a positive integer that is equal to the sum of all its positive divisors except itself.

// Now, given an integer n, write a function that returns true when it is a perfect number and false when it is not.
// Example:
// Input: 28
// Output: True
// Explanation: 28 = 1 + 2 + 4 + 7 + 14
// Note: The input number n will not exceed 100,000,000. (1e8)

#include <iostream>

using namespace std;

bool checkPerfectNumber(int num);

int main()
{
    cout << boolalpha << checkPerfectNumber(28);
    return 0;
}
// An Efficient Solution is to go through numbers till square root of n. If a number ‘i’ divides n, then add both ‘i’ and n/i to sum.
bool checkPerfectNumber(int num)
{
    int sum = 1;
    for(int i = 2; i*i <= num; i++){
        if(num % i == 0){
            if(i*i != num){
                sum += i + num/i;
            }
            else {
                sum += i;
            }
        }
    }
    if(sum == num && num != 1) return true;
    return false;
}
// Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

// Note: For the purpose of this problem, we define empty string as valid palindrome.

// Example 1:

// Input: "A man, a plan, a canal: Panama"
// Output: true
// Example 2:

// Input: "race a car"
// Output: false

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    return 0;
}

bool isPalindrome(string s)
{
    int left = 0;
    int right = s.size() - 1;

    if (s == " ")
        return true;

    while (left <= right)
    {
        if (!isalpha(s[left]) && !isdigit(s[left]))
        {
            left++;
            continue;
        }

        if (!isalpha(s[right]) && !isdigit(s[right]))
        {
            right--;
            continue;
        }

        if (tolower(s[left]) != tolower(s[right]))
            return false;

        left++;
        right--;
    }

    return true;
}
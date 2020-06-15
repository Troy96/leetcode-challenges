// Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word (last word means the last appearing word if we loop from left to right) in the string.

// If the last word does not exist, return 0.

// Note: A word is defined as a maximal substring consisting of non-space characters only.

// Example:

// Input: "Hello World"
// Output: 5

#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

int lengthOfLastWord(string s);

int main()
{
    return 0;
}

int lengthOfLastWord(string s)
{   
    int len = 0;

    for(int i = s.size() - 1; i >= 0; i--) {
        if(len > 0 && s[i] == ' ') break;

        else if(s[i] != ' ') len++;
    }

    return len;

}
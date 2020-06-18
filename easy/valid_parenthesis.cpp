// Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Note that an empty string is also considered valid.

// Example 1:

// Input: "()"
// Output: true
// Example 2:

// Input: "()[]{}"
// Output: true
// Example 3:

// Input: "(]"
// Output: false
// Example 4:

// Input: "([)]"
// Output: false
// Example 5:

// Input: "{[]}"
// Output: true
#include <iostream>
#include <vector>
#include <string.h>
#include <stack>

using namespace std;

int main()
{

    return 0;
}

bool isValid(string s)
{
    stack<char> st;
    char ch;

    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
            continue;
        }

        if (st.empty())
            return false;

        switch (s[i])
        {
        case ')':
            ch = st.top();
            st.pop();
            if (ch == '{' || ch == '[')
                return false;
            break;
        case '}':
            ch = st.top();
            st.pop();
            if (ch == '(' || ch == '[')
                return false;
            break;
        case ']':
            ch = st.top();
            st.pop();
            if (ch == '(' || ch == '{')
                return false;
            break;
    }}

    return st.empty();
}
// Given a valid (IPv4) IP address, return a defanged version of that IP address.

// A defanged IP address replaces every period "." with "[.]".

// Example 1:

// Input: address = "1.1.1.1"
// Output: "1[.]1[.]1[.]1"
// Example 2:

// Input: address = "255.100.50.0"
// Output: "255[.]100[.]50[.]0"

// Constraints:

// The given address is a valid IPv4 address.

#include <iostream>

using namespace std;

string defangIPaddr(string address);

int main()
{
    string res = defangIPaddr("255.100.50.0");
    cout << res;
    return 0;
}

string defangIPaddr(string address)
{
    string ans = "";
    for (int i = 0; i < address.length(); i++)
    {
        char c = address[i];
        (c == '.') ? ans = ans + "[.]" : ans += c;
    }
    return ans;
}
// Given a string text, you want to use the characters of text to form as many instances of the word "balloon" as possible.

// You can use each character in text at most once. Return the maximum number of instances that can be formed.

// Example 1:

// Input: text = "nlaebolko"
// Output: 1
// Example 2:

// Input: text = "loonbalxballpoon"
// Output: 2
// Example 3:

// Input: text = "leetcode"
// Output: 0

// Constraints:

// 1 <= text.length <= 10^4
// text consists of lower case English letters only.

#include <iostream>
#include <unordered_map>

using namespace std;

int maxNumberOfBalloons(string text);

int main()
{
    cout << maxNumberOfBalloons("loonbalxballpoon");
    return 0;
}

int maxNumberOfBalloons(string text)
{
    unordered_map<char, int> baloon_map;

    for(char c: text) baloon_map[c]++;
    return min({baloon_map['b'], baloon_map['a'], baloon_map['l']/ 2, baloon_map['o'] /2, baloon_map['n']});
}
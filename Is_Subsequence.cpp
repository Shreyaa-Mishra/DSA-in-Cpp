/*
392. Is Subsequence

Given two strings s and t, return true if s is a subsequence of t,
or false otherwise.

A subsequence of a string is a new string that is formed from the
original string by deleting some (can be none) of the characters
without disturbing the relative positions of the remaining characters.

For example:
"ace" is a subsequence of "abcde"
"aec" is not a subsequence of "abcde"

Example 1:
Input:
s = "abc"
t = "ahbgdc"

Output:
true

Example 2:
Input:
s = "axc"
t = "ahbgdc"

Output:
false

Constraints:
0 <= s.length <= 100
0 <= t.length <= 10^4
s and t consist only of lowercase English letters.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // ===== LEETCODE SOLUTION STARTS HERE =====
    bool isSubsequence(string s, string t) {

        int L1 = s.length();
        int L2 = t.length();

        int index = 0;

        for (int i = 0; i < L2; i++) {

            if (t[i] == s[index]) {
                index++;
            }

            if (index == L1)
                return true;
        }

        return (index == L1);
    }
    // ===== LEETCODE SOLUTION ENDS HERE =====
};

int main() {

    Solution solution;

    string s, t;

    cout << "Enter string s: ";
    cin >> s;

    cout << "Enter string t: ";
    cin >> t;

    bool result = solution.isSubsequence(s, t);

    cout << "Is Subsequence: " << (result ? "true" : "false") << endl;

    return 0;
}
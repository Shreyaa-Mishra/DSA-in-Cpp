/*
14. Longest Common Prefix

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:
Input: strs = ["flower","flow","flight"]
Output: "fl"

Example 2:
Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.

Constraints:
1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lowercase English letters if it is non-empty.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // ===== LEETCODE SOLUTION STARTS HERE =====
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string prefix = strs[0];

        for (int i = 1; i < strs.size(); i++) {
            while (strs[i].find(prefix) != 0) {
                prefix.pop_back();

                if (prefix.empty()) {
                    return "";
                }
            }
        }

        return prefix;
    }
    // ===== LEETCODE SOLUTION ENDS HERE =====
};

int main() {
    Solution solution;

    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    vector<string> strs(n);

    cout << "Enter the strings:\n";
    for (int i = 0; i < n; i++) {
        cin >> strs[i];
    }

    string result = solution.longestCommonPrefix(strs);

    cout << "Longest Common Prefix: " << result << endl;

    return 0;
}
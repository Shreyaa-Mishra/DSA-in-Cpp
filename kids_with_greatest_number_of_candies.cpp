/*
1431. Kids With the Greatest Number of Candies

There are n kids with candies. You are given an integer array candies,
where each candies[i] represents the number of candies the ith kid has,
and an integer extraCandies, denoting the number of extra candies that you have.

Return a boolean array result of length n, where result[i] is true if,
after giving the ith kid all the extraCandies, they will have the greatest
number of candies among all the kids, or false otherwise.

Note that multiple kids can have the greatest number of candies.

Example 1:
Input:
candies = [2,3,5,1,3]
extraCandies = 3

Output:
[true,true,true,false,true]

Explanation:
If you give all extraCandies to:
- Kid 1: 2 + 3 = 5 (greatest)
- Kid 2: 3 + 3 = 6 (greatest)
- Kid 3: 5 + 3 = 8 (greatest)
- Kid 4: 1 + 3 = 4 (not greatest)
- Kid 5: 3 + 3 = 6 (greatest)

Example 2:
Input:
candies = [4,2,1,1,2]
extraCandies = 1

Output:
[true,false,false,false,false]

Example 3:
Input:
candies = [12,1,12]
extraCandies = 10

Output:
[true,false,true]

Constraints:
n == candies.length
2 <= n <= 100
1 <= candies[i] <= 100
1 <= extraCandies <= 50
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // ===== LEETCODE SOLUTION STARTS HERE =====
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandies = 0;

        for (int candy : candies) {
            maxCandies = max(maxCandies, candy);
        }

        vector<bool> result;

        for (int candy : candies) {
            result.push_back(candy + extraCandies >= maxCandies);
        }

        return result;
    }
    // ===== LEETCODE SOLUTION ENDS HERE =====
};

int main() {
    Solution solution;

    int n;

    cout << "Enter number of kids: ";
    cin >> n;

    vector<int> candies(n);

    cout << "Enter candies for each kid:\n";
    for (int i = 0; i < n; i++) {
        cin >> candies[i];
    }

    int extraCandies;
    cout << "Enter extra candies: ";
    cin >> extraCandies;

    vector<bool> result = solution.kidsWithCandies(candies, extraCandies);

    cout << "Result: [";
    for (int i = 0; i < result.size(); i++) {
        cout << (result[i] ? "true" : "false");

        if (i != result.size() - 1)
            cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}
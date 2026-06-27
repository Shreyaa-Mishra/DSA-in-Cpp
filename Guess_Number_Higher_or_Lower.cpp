/*
374. Guess Number Higher or Lower

We are playing the Guess Game. The game is as follows:

I pick a number from 1 to n. You have to guess which number I picked
(the number I picked stays the same throughout the game).

Every time you guess wrong, I will tell you whether the number I picked
is higher or lower than your guess.

You call a pre-defined API:

int guess(int num)

which returns:

-1 : Your guess is higher than the number I picked (num > pick)
 1 : Your guess is lower than the number I picked (num < pick)
 0 : Your guess is equal to the number I picked (num == pick)

Return the number that I picked.

Example 1:
Input: n = 10, pick = 6
Output: 6

Example 2:
Input: n = 1, pick = 1
Output: 1

Example 3:
Input: n = 2, pick = 1
Output: 1

Constraints:
1 <= n <= 2^31 - 1
1 <= pick <= n
*/

#include <bits/stdc++.h>
using namespace std;

// ------------------------------------------------------------------
// Simulated Guess API for VS Code testing only.
// LeetCode already provides this function.
// ------------------------------------------------------------------

int pick;

int guess(int num) {
    if (num > pick)
        return -1;
    else if (num < pick)
        return 1;
    else
        return 0;
}

class Solution {
public:
    // ===== LEETCODE SOLUTION STARTS HERE =====
    int guessNumber(int n) {
        int first = 1, last = n;

        while (first <= last) {
            int mid = first + (last - first) / 2;

            if (guess(mid) == 0)
                return mid;
            else if (guess(mid) == -1)
                last = mid - 1;
            else
                first = mid + 1;
        }

        return -1;
    }
    // ===== LEETCODE SOLUTION ENDS HERE =====
};

int main() {
    Solution solution;

    int n;

    cout << "Enter value of n: ";
    cin >> n;

    cout << "Enter the picked number: ";
    cin >> pick;

    int result = solution.guessNumber(n);

    cout << "Guessed Number: " << result << endl;

    return 0;
}
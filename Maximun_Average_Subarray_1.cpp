/*
643. Maximum Average Subarray I

You are given an integer array nums consisting of n elements,
and an integer k.

Find a contiguous subarray whose length is equal to k that has
the maximum average value and return this value.

Any answer with a calculation error less than 10^-5 will be accepted.

Example 1:
Input:
nums = [1,12,-5,-6,50,3]
k = 4

Output:
12.75000

Explanation:
Maximum average is (12 - 5 - 6 + 50) / 4
= 51 / 4
= 12.75

Example 2:
Input:
nums = [5]
k = 1

Output:
5.00000

Constraints:
n == nums.length
1 <= k <= n <= 100000
-10000 <= nums[i] <= 10000
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // ===== LEETCODE SOLUTION STARTS HERE =====
    double findMaxAverage(vector<int>& nums, int k) {

        int sum = 0;

        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }

        int maxi = sum;

        for (int i = k; i < nums.size(); i++) {
            sum = sum + nums[i] - nums[i - k];
            maxi = max(maxi, sum);
        }

        return maxi / (double)k;
    }
    // ===== LEETCODE SOLUTION ENDS HERE =====
};

int main() {

    Solution solution;

    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements:\n";

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int k;

    cout << "Enter value of k: ";
    cin >> k;

    double result = solution.findMaxAverage(nums, k);

    cout << fixed << setprecision(5);
    cout << "Maximum Average: " << result << endl;

    return 0;
}
/*
283. Move Zeroes

Given an integer array nums, move all 0's to the end of it while maintaining
the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

Example 1:
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

Example 2:
Input: nums = [0]
Output: [0]

Constraints:
1 <= nums.length <= 10^4
-2^31 <= nums[i] <= 2^31 - 1

Follow up:
Could you minimize the total number of operations done?
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // ===== LEETCODE SOLUTION STARTS HERE =====
    void moveZeroes(vector<int>& nums) {
        int j = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
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

    solution.moveZeroes(nums);

    cout << "Array after moving zeroes: ";

    for (int num : nums) {
        cout << num << " ";
    }

    cout << endl;

    return 0;
}
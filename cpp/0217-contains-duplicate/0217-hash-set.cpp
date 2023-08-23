// source : https://leetcode.com/problems/contains-duplicate
// author : Landon Thull
// date   : 08-23-2023

/* 
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

Example 1:
Input: nums = [1,2,3,1]
Output: true

Example 2:
Input: nums = [1,2,3,4]
Output: false

Example 3:
Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true

Constraints:
1 <= nums.length <= 105
-109 <= nums[i] <= 109 
*/

// Method           : Hash Set
// Time Complexity  : O(n)
// Space Complexity : O(n)

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;

        for (int num : nums) {
            if (s.count(num) > 0) {
                return true;
            }
            s.insert(num);
        }
        return false;
    }
};
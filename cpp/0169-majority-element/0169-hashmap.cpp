// source : https://leetcode.com/problems/majority-element
// author : Landon Thull
// date   : 09-18-2023

/*
Given the head of a singly linked list,
reverse the list, and return the reversed list.

Example 1:
Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]

Example 2:
Input: head = [1,2]
Output: [2,1]

Example 3:
Input: head = []
Output: []

Constraints:
The number of nodes in the list is the range [0, 5000].
-5000 <= Node.val <= 5000
*/

class Solution
{
public:
  int majorityElement(vector<int> &nums)
  {
    int half = nums.size() / 2;
    unordered_map<int, int> m;

    for (const int &num : nums)
    {
      m[num]++;
      if (m[num] > half)
      {
        return num;
      }
    }

    return -1;
  }
};
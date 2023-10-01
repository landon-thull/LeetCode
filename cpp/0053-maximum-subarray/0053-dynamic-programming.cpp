// source : https://leetcode.com/problems/maximum-subarray
// author : Landon Thull
// date   : 09-28-2023

class Solution
{
public:
  int maxSubArray(vector<int> &nums)
  {
    int l = nums.size();
    if (l == 1)
    {
      return nums[0];
    }

    int maxSum = nums[0];
    int currSum = nums[0];

    for (int i = 1; i < l; i++)
    {
      currSum = max(currSum + nums[i], nums[i]);
      maxSum = max(maxSum, currSum);
    }

    return maxSum;
  }
};
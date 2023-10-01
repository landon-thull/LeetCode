// source : https://leetcode.com/problems/maximum-subarray
// author : Landon Thull
// date   : 09-28-2023

class Solution
{
public:
  int maxSubArray(vector<int> &nums)
  {
    int l = nums.size();
    int maxSum = nums[0];

    for (int i = 0; i < l; i++)
    {
      int currSum = 0;
      for (int j = i; j < l; j++)
      {
        currSum += nums[j];
        maxSum = max(maxSum, currSum);
      }
    }

    return maxSum;
  }
};

# source : https://leetcode.com/problems/two-sum
# author : Landon Thull
# date   : 10-02-2023
class Solution:
  def twoSum(self, nums: List[int], target: int) -> List[int]:
    remainders = {}

    for i, num in enumerate(nums):
      remainder = target - num
      if remainder in remainders:
        return [i, remainders[remainder]]
      remainders[num] = i
    return [0, 0]
class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        l = len(nums)

        out = [0]*l

        out[0] = 1
        for i in range(1, l):
            out[i] = nums[i - 1] * out[i - 1]

        r_prod = 1
        for i in reversed(range(l)):
            out[i] = out[i] * r_prod
            r_prod *= nums[i]

        return out
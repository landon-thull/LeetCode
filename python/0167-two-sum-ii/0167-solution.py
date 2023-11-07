class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        n = len(numbers)
        l = 0
        r = n - 1

        while l < r:
            temp_sum = numbers[l] + numbers[r]

            if temp_sum == target:
                # return must be 1-indexed
                return [l + 1, r + 1]
            
            if temp_sum < target:
                l += 1
                continue
            
            if temp_sum > target:
                r -= 1
                continue

        return [0, 0]
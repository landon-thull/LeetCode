class Solution:
    def firstBadVersion(self, n: int) -> int:
        l = 0
        r = n

        # binary search for first bad version
        while l < r:
            mid = (l + r) // 2

            if isBadVersion(mid):
                r = mid
                continue
            
            if not isBadVersion(mid):
                l = mid + 1

        return l
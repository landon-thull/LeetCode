class Solution:
  def isPalindrome(self, s: str) -> bool:
    # init left pointer at 0
    l = 0    
    # init right pointer at end of s
    r = len(s) - 1

    # while r > l
    while r > l:
      # if s[r] is not alphanumeric decrement r, continue
      if not s[r].isalnum():
        r -= 1
        continue

      # if s[l] is not alphanumeric increment l, continue
      if not s[l].isalnum():
        l += 1
        continue

      # if s[r] != s[l] return false
      if s[r].lower() != s[l].lower():
        return False

      r -= 1
      l += 1

    return True

# [20 - Valid Parentheses](https://leetcode.com/problems/valid-parentheses)

## Approach 1 - Stack

### Intuition
Each opening brack must have a closing bracket, and brackets must be closed in order. 
A stack data structure can be used to check if brackets are closed in the correct order. 

### Algorithm
1. Initialize a stack, `s`.
2. for each `num` in `nums`:
- If `num` is a opening bracket, add it to `s`.
- If `num` is a closing bracket, check if the top of `s` is its respective closing bracket. If it is, pop it from `s`, else return `False`.
3. If `s` is empty return `True`, else return `False`.

### Complexity Analysis
- Time Complexity: `O(N)`, iteration through `nums` is `O(N)`, pushing and popping to the stack are `O(1)`.
- Space Complexity: `O(N)`
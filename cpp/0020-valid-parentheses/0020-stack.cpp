// source : https://leetcode.com/problems/valid-parentheses/
// author : Landon Thull
// date   : 09-02-2023

/* 
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
An input string is valid if:
Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 
Example 1:
Input: s = "()"
Output: true

Example 2:
Input: s = "()[]{}"
Output: true

Example 3:
Input: s = "(]"
Output: false
 
Constraints:
1 <= s.length <= 104
s consists of parentheses only '()[]{}'.
*/

class Solution {
public:
  bool isValid(string s) {
    if (s.length() % 2 == 1) return false;

    stack<char> o;
    unordered_map<char, char> p = {
      {')', '('},
      {']', '['},
      {'}', '{'}
    };
    for (const auto& c : s) {
      if (p.find(c) != p.end()) {
        if (o.empty()) {
          return false;
        }
        if (o.top() != p[c])  {
          return false;
        }
        o.pop();
      } else {
        o.push(c);
      }
    }
    return o.empty();
  }
};
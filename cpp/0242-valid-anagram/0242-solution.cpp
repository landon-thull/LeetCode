// source : https://leetcode.com/problems/valid-anagram
// author : Landon Thull
// date   : 08-27-2023

/* 
Given two strings s and t, return true if t is an anagram of s, and false otherwise.
An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

Example 1:
Input: s = "anagram", t = "nagaram"
Output: true

Example 2:
Input: s = "rat", t = "car"
Output: false
 
Constraints:
1 <= s.length, t.length <= 5 * 104
s and t consist of lowercase English letters. 
*/

class Solution {
public:
  bool isAnagram(string s, string t) {
    int a[26] = {0};

    if (s.length() != t.length()) {
      return false;
    }

    for (int i = 0; i < s.length(); i++) {
      a[s[i] - 'a']++;
      a[t[i] - 'a']--;
    }

    for (int x : a) {
      if (x != 0) {
          return false;
      }
    }

    return true;
  }
};
// source : https://leetcode.com/problems/ransom-note
// author : Landon Thull
// date   : 09-12-2023

/*
Given two strings ransomNote and magazine,
return true if ransomNote can be constructed by using the letters from magazine
and false otherwise.
Each letter in magazine can only be used once in ransomNote.

Example 1:
Input: ransomNote = "a", magazine = "b"
Output: false

Example 2:
Input: ransomNote = "aa", magazine = "ab"
Output: false

Example 3:
Input: ransomNote = "aa", magazine = "aab"
Output: true

Constraints:
1 <= ransomNote.length, magazine.length <= 105
ransomNote and magazine consist of lowercase English letters.
*/

class Solution
{
public:
  bool canConstruct(string ransomNote, string magazine)
  {
    unordered_map<char, int> m;

    for (const char &c : magazine)
    {
      m[c] += 1;
    }

    for (const char &c : ransomNote)
    {
      m[c] -= 1;
      if (m[c] < 0)
        return false;
    }

    return true;
  }
};
// source : https://leetcode.com/problems/add-binary
// author : Landon Thull
// date   : 09-19-2023

/*
Given two binary strings a and b, return their sum as a binary string.

Example 1:
Input: a = "11", b = "1"
Output: "100"

Example 2:
Input: a = "1010", b = "1011"
Output: "10101"

Constraints:
1 <= a.length, b.length <= 104
a and b consist only of '0' or '1' characters.
Each string does not contain leading zeros except for the zero itself.
*/

class Solution
{
public:
  string addBinary(string a, string b)
  {
    string sumStr;
    int carry = 0;
    int i = a.length() - 1;
    int j = b.length() - 1;

    while (i >= 0 || j >= 0 || carry)
    {
      if (i >= 0)
      {
        carry += a[i--] - '0';
      }
      if (j >= 0)
      {
        carry += b[j--] - '0';
      }
      sumStr += carry % 2 + '0';
      carry /= 2;
    }

    reverse(begin(sumStr), end(sumStr));
    return sumStr;
  }
};
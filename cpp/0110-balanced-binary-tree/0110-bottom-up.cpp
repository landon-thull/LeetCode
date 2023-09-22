// source : https://leetcode.com/problems/balanced-binary-tree
// author : Landon Thull
// date   : 09-22-2023

class Solution {
private:

bool isBalancedTreeHelper(TreeNode* root, int& height) {
  if (root == NULL) {
    height = -1;
    return true;
  }

  int left, right;
  if (
    isBalancedTreeHelper(root->left, left) &&
    isBalancedTreeHelper(root->right, right) &&
    abs(left - right) < 2) 
    {
      height = max(left, right) + 1;
      return true;
    }
  return false;
}

public:
    bool isBalanced(TreeNode* root) {
      int height;
      return isBalancedTreeHelper(root, height);
    }
};
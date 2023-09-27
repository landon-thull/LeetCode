// source : https://leetcode.com/problems/diameter-of-binary-tree
// author : Landon Thull
// date   : 09-26-2023

class Solution {
private:
  // global store for max diameter
  int diameter = 0;

  int longestPath(TreeNode* node) {
    if (node == NULL) {
      return 0;
    }

    int leftPath = longestPath(node->left);
    int rightPath = longestPath(node->right);

    diameter = max(diameter, leftPath + rightPath);

    return max(leftPath, rightPath) + 1;
  } 
public:
  int diameterOfBinaryTree(TreeNode* root) {
    longestPath(root);
    return diameter;
  }
};
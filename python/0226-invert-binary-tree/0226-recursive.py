class Solution:
  def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
    if root is not None:
      # temporary clone of left
      temp = self.invertTree(root.left)
      # swap right side to left side
      root.left = self.invertTree(root.right)
      # swap left side to right
      root.right = temp

    return root
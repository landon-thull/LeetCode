class Solution:
    def isBalancedHelper(self, root: TreeNode) -> (bool, int):
        if not root:
            return True, -1
        
        isLeftBalanced, leftHeight = self.isBalancedHelper(root.left)
        if not isLeftBalanced:
            return False, 0
        
        isRightBalanced, rightHeight = self.isBalancedHelper(root.right)
        if not isRightBalanced:
            return False, 0
        
        return (abs(leftHeight - rightHeight) < 2), 1 + max(leftHeight, rightHeight)

    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        return self.isBalancedHelper(root)[0]
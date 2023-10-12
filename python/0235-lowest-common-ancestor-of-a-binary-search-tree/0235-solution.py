class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        last_common = root
        p_node = root
        q_node = root

        while p_node == q_node:
            if p.val < p_node.val:
                p_node = p_node.left
            elif p.val > p_node.val:
                p_node = p_node.right

            if q.val < q_node.val:
                q_node = q_node.left
            elif q.val > q_node.val:
                q_node = q_node.right

            if q_node == p_node:
                last_common = q_node
        
        return last_common
class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        if not root:
            return True

        def r(root, t):
            if not root:
                return True
            if t[0] < root.val < t[1]:
                if r(root.left, (t[0], root.val)) and r(root.right, (root.val, t[1])):
                    return True
                return False

        return r(root, (float("-inf"), float("inf")))

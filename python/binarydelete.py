class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

def deleteNode(root: TreeNode, key: int) -> TreeNode:
    if not root:
        return None

    if key < root.val:
        root.left = deleteNode(root.left, key)
    elif key > root.val:
        root.right = deleteNode(root.right, key)
    else:
        # Case 1: Node to be deleted has no children
        if not root.left and not root.right:
            root = None
        # Case 2: Node to be deleted has one child
        elif not root.left:
            root = root.right
        elif not root.right:
            root = root.left
        # Case 3: Node to be deleted has two children
        else:
            # Find the inorder successor (the smallest node in the right subtree)
            temp = root.right
            while temp.left:
                temp = temp.left
            # Replace the node to be deleted with the inorder successor
            root.val = temp.val
            # Delete the inorder successor from the right subtree
            root.right = deleteNode(root.right, temp.val)

    return root

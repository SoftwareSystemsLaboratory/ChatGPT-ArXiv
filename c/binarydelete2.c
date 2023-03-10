#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct TreeNode* deleteNode(struct TreeNode* root, int key) {
    if (!root) {
        return NULL;
    }

    if (key < root->val) {
        root->left = deleteNode(root->left, key);
    }
    else if (key > root->val) {
        root->right = deleteNode(root->right, key);
    }
    else {
        // Case 1: Node to be deleted has no children
        if (!root->left && !root->right) {
            free(root);
            return NULL;
        }
        // Case 2: Node to be deleted has one child
        else if (!root->left) {
            struct TreeNode* temp = root->right;
            free(root);
            return temp;
        }
        else if (!root->right) {
            struct TreeNode* temp = root->left;
            free(root);
            return temp;
        }
        // Case 3: Node to be deleted has two children
        else {
            // Find the inorder successor (the smallest node in the right subtree)
            struct TreeNode* temp = root->right;
            while (temp->left) {
                temp = temp->left;
            }
            // Replace the node to be deleted with the inorder successor
            root->val = temp->val;
            // Delete the inorder successor from the right subtree
            root->right = deleteNode(root->right, temp->val);
        }
    }

    return root;
}

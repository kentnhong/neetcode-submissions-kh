/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inorder(TreeNode* node, std::vector<int>& result) {
        if (node == nullptr) {
            return;
        }
        if (node->left != nullptr) {
            inorder(node->left, result);
        }
        result.push_back(node->val);
        if (node->right != nullptr) {
            inorder(node->right, result);
        }
        return;
    }

    vector<int> inorderTraversal(TreeNode* root) {
        std::vector<int> result;
        inorder(root, result);
        return result;
    }
};
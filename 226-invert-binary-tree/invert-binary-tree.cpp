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
    void  invert(TreeNode* root){
        if(!root)   return;
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;
        if(root->left)  invertTree(root->left);
        if(root->right)  invertTree(root->right);
    }
    TreeNode* invertTree(TreeNode* root) {
        if(!root)   return nullptr;
        TreeNode* mainroot = root;
        invert(root);
        return mainroot;
    }
};
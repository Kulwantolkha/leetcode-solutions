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
    int maxDepth(TreeNode* root){
        if(root == NULL)    return 0;
        int lh = maxDepth(root->left);
        int rh = maxDepth(root->right);
        int diff = abs(lh-rh);
        if(lh==-1 || rh==-1 || diff>1)  return -1;
        return max(lh,rh)+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)  return true;
        if(maxDepth(root)==-1)  return  false;
        return true;
    }
};
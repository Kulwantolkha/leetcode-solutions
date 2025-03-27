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
    int cntnodes(TreeNode* root,int& ans){
        if(root==NULL)  return ans;
        ans = ans+1;
        cntnodes(root->left,ans);
        cntnodes(root->right,ans);
        return ans;
    }
    int countNodes(TreeNode* root) {
        int ans = 0;
        cntnodes(root,ans);
        return ans;
    }
};
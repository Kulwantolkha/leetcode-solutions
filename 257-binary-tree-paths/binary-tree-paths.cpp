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
    void getpath(TreeNode* root,vector<string>& ans, string temp){
        if(root->left==NULL && root->right==NULL){
            ans.push_back(temp);
            return;
        }
        if(root->left)  getpath(root->left,ans,temp+"->"+to_string(root->left->val));
        if(root->right) getpath(root->right,ans,temp+"->"+to_string(root->right->val));
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        if(!root)   return ans;
        getpath(root,ans,to_string(root->val));
        return ans;
    }
};
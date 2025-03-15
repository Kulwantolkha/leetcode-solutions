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
    void preOrder(TreeNode* node,vector<int>& ans){
        if(node==nullptr){
            ans.push_back(INT_MIN);
            return;
        }
        ans.push_back(node->val);
        preOrder(node->left,ans);
        preOrder(node->right,ans);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> ans,ans1;
        preOrder(p,ans);
        preOrder(q,ans1);
        if(ans==ans1)  return true;
        return false;
    }
};
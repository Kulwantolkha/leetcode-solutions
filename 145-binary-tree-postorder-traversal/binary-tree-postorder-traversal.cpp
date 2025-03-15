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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root==NULL)  return ans;
        stack<TreeNode*> st1;
        stack<TreeNode*> st2;
        TreeNode* curr = root;
        st1.push(curr);
        while(!st1.empty()){
            TreeNode* current = st1.top();
            st2.push(current);
            st1.pop();
            if(current->left)   st1.push(current->left);
            if(current->right)  st1.push(current->right);
        }
        while(!st2.empty()){
            ans.push_back(st2.top()->val);
            st2.pop();
        }
        return ans;
    }
};
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==nullptr)   return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            // TreeNode curr = q.front();
            int size = q.size();
            vector<int> sub;
            for(int i=0;i<size;i++){
                TreeNode* curr = q.front();
                q.pop();
                sub.push_back(curr->val);
                if(curr->left)  q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            ans.push_back(sub);
        }
        return ans;
    }
};
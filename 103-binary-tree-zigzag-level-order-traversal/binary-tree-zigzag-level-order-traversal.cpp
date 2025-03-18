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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==nullptr)   return ans;
        bool b = true;
        TreeNode* curr = root;
        queue<TreeNode*> q;
        q.push(curr);
        while(!q.empty()){
            int size = q.size();
            vector<int> sub(size);
            for(int i=0;i<size;i++){
                TreeNode* current = q.front();
                q.pop();
                int ind = b ? i : size-1-i;
                sub[ind] = current->val;
                if(current->left)   q.push(current->left);
                if(current->right)  q.push(current->right);
            }
            ans.push_back(sub);
            b = !b;
        }
        return ans;

    }
};
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
    int widthOfBinaryTree(TreeNode* root) {
        int ans = 0;
        if(!root)   return ans;
        queue<pair<TreeNode*,int>> q;
        q.push({root,0});
        while(!q.empty()){
            int size = q.size();
            int left,right;
            long long mini = q.front().second;
            for(int i=0;i<size;i++){
                auto node = q.front();
                TreeNode* curr = node.first;
                long long minim = node.second-mini;
                q.pop();
                if(i==0) left = minim;
                if(i==size-1)    right = minim;
                if(curr->left)  q.push({curr->left,2*(minim)+1});
                if(curr->right) q.push({curr->right,2*(minim)+2});
            }
            ans = max(ans,(int)(right-left+1));
        }
        return ans;
    }
};
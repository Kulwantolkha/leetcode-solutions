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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        queue<pair<TreeNode*,pair<int,int>>> q;
        map<int,map<int,multiset<int>>> mpp;
        q.push({root,{0,0}});
        while(!q.empty()){
            auto curr = q.front();
            TreeNode* node = curr.first;
            q.pop();
            int x = curr.second.first;
            int y = curr.second.second;
            mpp[x][y].insert(node->val);
            if(node->left){
                q.push({node->left,{x-1,y+1}});
            }
            if(node->right){
                q.push({node->right,{x+1,y+1}});
            }
        }
        vector<vector<int>> ans;
        for(auto it : mpp){
            vector<int> temp;
            for(auto it1 : it.second){
                temp.insert(temp.end(),it1.second.begin(),it1.second.end());
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> disK(TreeNode* tar, int k, map<TreeNode*,TreeNode*>& parentMap){
        queue<TreeNode*> q;
        q.push(tar);
        vector<int> ans;
        map<TreeNode*,bool> mpp;
        mpp[tar] = true;
        int curr_pos = 0;
        while(!q.empty()){
            int size = q.size();
            if(curr_pos==k) break;
            for(int i=0;i<size;i++){
                TreeNode* curr = q.front();
                q.pop();
                if(curr->left && !mpp[curr->left]){
                    mpp[curr->left] = true;
                    q.push(curr->left);
                }
                if(curr->right && !mpp[curr->right]){
                    mpp[curr->right] = true;
                    q.push(curr->right);
                }
                if(parentMap.find(curr)!=parentMap.end() && !mpp[parentMap[curr]]){
                    mpp[parentMap[curr]] = true;
                    q.push(parentMap[curr]);
                }
            }
            curr_pos+=1;
        }
        while(!q.empty()){
            TreeNode* curr = q.front();
            ans.push_back(curr->val);
            q.pop();
        }
        return ans;
    }
    TreeNode* makePar(TreeNode* root, TreeNode* target, map<TreeNode*, TreeNode*>& mpp){
        queue<TreeNode*> q;
        q.push(root);
        TreeNode* ans = nullptr;
        while(!q.empty()){
            TreeNode* curr = q.front();
            q.pop();
            if(curr==target)    ans = curr;
            if(curr->left){
                mpp[curr->left] = curr;
                q.push(curr->left);
            }
            if(curr->right){
                mpp[curr->right] = curr;
                q.push(curr->right);
            }
        }
        return ans;
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        map<TreeNode*,TreeNode*> parentMap;
        TreeNode* tar = makePar(root,target,parentMap);
        return disK(tar, k, parentMap);
    }
};
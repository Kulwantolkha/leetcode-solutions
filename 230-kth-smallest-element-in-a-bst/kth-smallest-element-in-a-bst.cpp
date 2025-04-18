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
    void traversal(TreeNode* root, vector<int>& ele){
        if(root==nullptr)   return;
        ele.push_back(root->val);
        traversal(root->left,ele);
        traversal(root->right,ele);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> ele;
        traversal(root,ele);
        sort(ele.begin(),ele.end());
        return ele[k-1];
    }
};
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
    TreeNode* buildcompleteTree(vector<int>& preorder, int presrt, int preend, vector<int>& inorder, int insrt, int inend, map<int,int>& mpp){
        if(presrt > preend || insrt > inend)    return NULL;
        TreeNode* root = new TreeNode(preorder[presrt]);
        int inRoot = mpp[root->val];
        int numsLeft = inRoot - insrt;
        root->left = buildcompleteTree(preorder,presrt+1,presrt+numsLeft,inorder,insrt,inRoot-1,mpp);
        root->right = buildcompleteTree(preorder,presrt+numsLeft+1,preend,inorder,inRoot+1,inend,mpp);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.size()==0 || inorder.size()==0)   return NULL;
        map<int,int> mpp;
        for(int i=0;i<inorder.size();i++){
            mpp[inorder[i]] = i;
        }
        TreeNode* root = buildcompleteTree(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,mpp);
        return root;
    }
};
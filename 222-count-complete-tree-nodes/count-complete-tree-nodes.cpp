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
    int leftheight(TreeNode* root){
        if(!root)   return 0;
        int cnt = 0;
        TreeNode* curr = root;
        while(curr){
            cnt++;
            curr = curr->left;
        }
        return cnt;
    }
    int rightheight(TreeNode* root){
        if(!root)   return 0;
        int cnt = 0;
        TreeNode* curr = root;
        while(curr){
            cnt++;
            curr = curr->right;
        }
        return cnt;
    }
    int countNodes(TreeNode* root) {
        if(!root) return 0;
        int lh = leftheight(root);
        int rh = rightheight(root);
        if(lh == rh)    return (1<<lh)-1;
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};
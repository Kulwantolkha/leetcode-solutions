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
    TreeNode* insertIntoBST(TreeNode* root, int data) {
        if(!root)   return new TreeNode(data);
        TreeNode* curr = root;
        while(true){
            if(curr->val<data){
                if(curr->right!=NULL)   curr = curr->right;
                else{
                    curr->right = new TreeNode(data);
                    break;
                }
            }
            else{
                if(curr->left!=NULL)    curr = curr->left;
                else{
                    curr->left = new TreeNode(data);
                    break;
                }
            }
        }
        return root;
    }
};
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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        if(preorder.size()==0)  return NULL;
        TreeNode* root = new TreeNode(preorder[0]);
        for(int i=1;i<preorder.size();i++){
            int k = preorder[i];
            TreeNode* temp = root;
            TreeNode* curr = new TreeNode(preorder[i]);
            while(temp){
                if(k<temp->val){
                    if(temp->left==nullptr){
                        temp->left = curr;
                        break;
                    }
                    else{
                        temp = temp->left;
                    }
                }
                else{
                    if(temp->right==nullptr){
                        temp->right = curr;
                        break;
                    }
                    else{
                        temp = temp->right;
                    }
                }
            }
        }
        return root;
    }
};
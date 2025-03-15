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
    int findSum(TreeNode* root, int localSum, int& uniSum){
        if(root==NULL)  return 0;
        int c1 = max(0,findSum(root->left,localSum,uniSum));
        int c2 = max(0,findSum(root->right,localSum,uniSum));
        localSum = c1+c2+root->val;
        uniSum = max(localSum,uniSum);
        return root->val+(max(c1,c2));
    }
    int maxPathSum(TreeNode* root) {
        if(root==NULL)  return 0;
        int sum = INT_MIN;
        findSum(root,0,sum);
        return sum;
    }
};
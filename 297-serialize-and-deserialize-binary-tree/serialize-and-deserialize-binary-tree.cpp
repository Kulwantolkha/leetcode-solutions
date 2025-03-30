/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string str;
        if(!root)   return str;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* curr = q.front();
            q.pop();
            if(!curr)    str.append("null,");
            else{
                str.append(to_string(curr->val)+",");
                q.push(curr->left);
                q.push(curr->right);
            }
        }
        return str;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.length()==0)    return NULL;
        stringstream s(data);
        string str;
        getline(s,str,',');
        TreeNode* root = new TreeNode(stoi(str));
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* curr = q.front();
            q.pop();
            getline(s,str,',');
            if(str=="null"){
                curr->left = NULL;
            }
            else{
                TreeNode* leftNode = new TreeNode(stoi(str));
                curr->left = leftNode;
                q.push(leftNode);
            }
            getline(s,str,',');
            if(str=="null"){
                curr->right = NULL;
            }
            else{
                TreeNode* rightNode = new TreeNode(stoi(str));
                curr->right = rightNode;
                q.push(rightNode);
            }
        }
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));
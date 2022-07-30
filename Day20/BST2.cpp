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
    TreeNode*search(TreeNode*root,int val){
        if(!root)   return NULL;
        if(root->val==val)    return root;
        if(val<root->val){
            // TreeNode*x=search(root->left,val);
            return search(root->left,val);
        }
        else{
            // TreeNode*x=search(root->right,val);
            return search(root->right,val);
        }
        return NULL;
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        return search(root,val);
    }
};

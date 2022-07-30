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
     vector<int>v;
    void inorder(vector<int>&v,TreeNode*root){
        if(root==NULL)  return;
        
       
        inorder(v,root->left);
        inorder(v,root->right);
                     v.push_back(root->val);;
        return;
    }
    vector<int> postorderTraversal(TreeNode* root) {
        if(root==NULL)  return v;
       
        inorder(v,root->left);
        inorder(v,root->right);
        v.push_back(root->val);
        return v;
    }
};

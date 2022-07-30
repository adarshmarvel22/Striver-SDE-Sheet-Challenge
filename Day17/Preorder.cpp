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
    void preorder(vector<int>&v,TreeNode*root){
        if(root==NULL)  return;
        
        v.push_back(root->val);
        preorder(v,root->left);
        preorder(v,root->right);
        return;
    }
    vector<int> preorderTraversal(TreeNode* root) {
        preorder(v,root);
        // for(auto x:v)  cout<<x;
        return v;
    }
};

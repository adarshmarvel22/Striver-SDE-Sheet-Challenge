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
    TreeNode* bstFromPreorder(vector<int>& pre) {
      int i=0;
        return buildTree(pre,i,INT_MAX);
    }
    TreeNode* buildTree(vector<int>&pre,int& i,int bound){
        if(pre.size()==i||pre[i]>bound)  return NULL;
        
        TreeNode* root=new TreeNode(pre[i++]);
        root->left=buildTree(pre,i,root->val);
    root->right=buildTree(pre,i,bound);
        return root;
        
    }
  
};

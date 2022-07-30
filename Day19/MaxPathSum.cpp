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
    int maxPathSum(TreeNode* root) {
        int mx=INT_MIN;
        pathsum(root,mx);
        return mx;
    }
    int pathsum(TreeNode*root,int&mx){
        if(!root)   return 0;
        
   int l = max(0, pathsum(root -> left, mx));
  int r = max(0, pathsum(root -> right, mx));
        
        mx=max((l+r+root->val),mx);
        
        return max(l,r)+root->val;
    }
};

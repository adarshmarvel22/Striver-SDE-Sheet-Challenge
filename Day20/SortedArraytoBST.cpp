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
    TreeNode* sortedArrayToBST(vector<int>& a) {
        return buildTree(0,a.size()-1,a);
    }
    TreeNode *buildTree(int l,int r,vector<int>&a){
        if(l>r)   return NULL;
        
        int mid=((l+r)/2);
        TreeNode*root=new TreeNode(a[mid]);
        
        root->left=buildTree(l,mid-1,a);
        root->right=buildTree(mid+1,r,a);
        
        return root;
    }
};

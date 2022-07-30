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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        map<int,int>mp;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        
        return buildTree(postorder,0,postorder.size()-1,inorder,0,inorder.size()-1,mp);
    }
    TreeNode* buildTree(vector<int>& postorder,int posS,int posE, vector<int>& inorder,int inS,int inE,map<int,int>&mp){
        if(posE<posS||inS>inE)  return NULL;
        
        TreeNode*root=new TreeNode(postorder[posE]);
        int root_idx=mp[root->val];
        int leftpart=root_idx-inS;
        
        root->left=buildTree(postorder,posS,posS+leftpart-1,inorder,inS,root_idx-1,mp);
        root->right=buildTree(postorder,posS+leftpart,posE-1,inorder,root_idx+1,inE,mp);
        
        return root;
    }
};

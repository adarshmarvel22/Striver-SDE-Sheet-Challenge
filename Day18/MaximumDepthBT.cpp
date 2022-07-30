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
    void traverse(TreeNode*r,int curht,int &maxht){
        if(r==NULL)  return;
        if(r->left==NULL){
            maxht=max(curht,maxht);
        }
        if(r->right==NULL){
            maxht=max(curht,maxht);
        }
        if(r->left!=NULL){
            traverse(r->left,curht+1,maxht);
        }
         if(r->right!=NULL){
            traverse(r->right,curht+1,maxht);
        }
    }
    
    int maxDepth(TreeNode* root) {
        
        int curht=1,maxht=0;
        traverse(root,curht,maxht);
        
        return maxht;
    }
};

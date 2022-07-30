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
        map<int,int>mp;
        
vector<int>in=pre;
        sort(in.begin(),in.end());
        for(int i=0;i<in.size();i++)   mp[in[i]]=i;
        
        return buildTree(pre,0,pre.size()-1,in,0,in.size()-1,mp);   
        // return NULL;
    }
    
    TreeNode*buildTree(vector<int>&pre,int preS,int preE,vector<int>&in,int inS,int inE,map<int,int>&mp){
        if(inS>inE||preS>preE)  return NULL;
        
        TreeNode*root=new TreeNode(pre[preS]);
        int root_idx=mp[root->val];
        int leftpart=root_idx-inS;
        
        root->left=buildTree(pre,preS+1,preS+leftpart,in,inS,root_idx-1,mp);
        root->right=buildTree(pre,preS+leftpart+1,preE,in,root_idx+1,inE,mp);

        return root;
    }
};

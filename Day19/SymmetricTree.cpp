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
// vector<int>v1;
// vector<int>v2;
class Solution {
public:
    //copied from solution_understood
    bool isSymmetric(TreeNode* root) 
{
   if(!root) return true;
    return abc(root->left, root->right);
    
}
bool abc(TreeNode* p, TreeNode* q)
{
    if(!p && !q) return true;
    else if(!p || !q) return false;
    if(p->val!=q->val) return false;
    return abc(p->left, q->right) && abc(p->right, q->left);
}
};

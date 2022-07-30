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
class BSTIterator {
public:
    queue<int>v;
    BSTIterator(TreeNode* root) {
        inorder(root,v);
    }
    
    int next() {
        int x=v.front();
        v.pop();
        return x;
    }
    
    bool hasNext() {
        return (!v.empty());
    }
    void inorder(TreeNode*root,queue<int>&v){
        if(!root)   return;
        
        inorder(root->left,v);
        v.push(root->val);
        inorder(root->right,v);
        
        return;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */

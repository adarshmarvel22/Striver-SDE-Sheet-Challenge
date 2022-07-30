/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
bool traverse(TreeNode*root,int t,stack<int>&st){
    if(!root)  return false;
st.push(root->val);
if(root->val==t)  return 1;

if(traverse(root->left,t,st)||traverse(root->right,t,st))
return true;

st.pop();
return false;

}

vector<int> Solution::solve(TreeNode* A, int B) {
    vector<int>ans;
stack<int>st;
    traverse(A,B,st);

    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(),ans.end());

    return ans;
}

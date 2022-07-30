// #define pb push_back
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;
       
        // vector<vector<int>> vec( 1 , vector<int> (1, 0));
          if(!root)  return v;
//         v[0].push_back(lvl)
        queue<TreeNode*>q;
        q.push(root);
        // q.push(NULL);
        // int i=0;
        while(!q.empty()){
             vector<int>lvl;
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode*temp=q.front();
            q.pop();
                if(temp->left)  q.push(temp->left);
            if(temp->right)   q.push(temp->right);
                lvl.push_back(temp->val);
            }
            
            // if(temp!=NULL){
                // cout<<temp->val;
                
            
            // }   
            // else if(!q.empty()){
            //     q.push(NULL);
                v.push_back(lvl);
            //     lvl.clear();
            //     // i++;
            // }   
        }
        return v;
    }
};

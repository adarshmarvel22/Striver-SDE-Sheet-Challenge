/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
         // vector<vector<int>> v;
        string s="";

          if(!root)  return s;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){

            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode*temp=q.front();
            q.pop();
                if(temp==NULL)    s+="#,";
                else{
                    s+=(to_string(temp->val)+',');
                }
                if(temp) 
                         q.push(temp->left);
            if(temp) 
                q.push(temp->right);
            }
                // v.push_back(lvl);
        }
        cout<<s;
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string s) {
        if(s.size()==0)   return NULL;
        
        stringstream s1(s);
        string str;
        getline(s1,str,',');
        
        TreeNode*root=new TreeNode(stoi(str));
        
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty()){
            TreeNode*temp=q.front();
            q.pop();
            getline(s1,str,',');
            
            if(str=="#")   temp->left=NULL;
            else{
                TreeNode*leftnode=new TreeNode((stoi(str)));
                temp->left=leftnode;
                q.push(leftnode);
            }
            
            getline(s1,str,',');
            
            if(str=="#")   temp->right=NULL;
            else{
                TreeNode*rightnode=new TreeNode((stoi(str)));
                temp->right=rightnode;
                q.push(rightnode);
            }
        }        
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));

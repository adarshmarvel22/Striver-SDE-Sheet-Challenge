/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(!node)  return NULL;
        vector<Node*>vis(1000,NULL);
        
        Node*cpy=new Node(node->val);
        dfs(node,cpy,vis);
        
        return cpy;
    }
    
    void dfs(Node *node,Node*cpy,vector<Node*>&vis){
        vis[node->val]=cpy;
        
        for(auto i:node->neighbors){
            if(!vis[i->val]){
                Node* temp=new Node(i->val);
                cpy->neighbors.push_back(temp);
                dfs(i,temp,vis);
            }
            else{
                cpy->neighbors.push_back(vis[i->val]);
            }
        }
    }
};

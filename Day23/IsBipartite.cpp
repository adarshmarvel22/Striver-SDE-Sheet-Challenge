class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
    
        int n=graph.size();
        // int color[n];
    // memset(color, -1, sizeof(color));
        vector<int>color(n,-1);
    for(int i = 0;i<n;i++) {
        if(color[i] == -1) {
            color[i] = 1;
            if(!color_dfs(i, graph, color)) {
                return false;
            }
        } 
    }
    return true; 
    }
    
    bool color_dfs(int node,vector<vector<int>>&adj, vector<int>&color) {
        
        // if(color[node]==-1)
        // color[node]=1;
    for(auto it : adj[node]) {
        if(color[it] == -1) {
            color[it] = 1 - color[node];
            if(!color_dfs(it, adj, color)) {
                return false; 
            }
        } else if(color[it] == color[node]) return false; 
    }
    return true; 
}
};
// dfs

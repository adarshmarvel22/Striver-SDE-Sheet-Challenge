class Solution {
    bool isCycle(vector<vector<int>>&adj,vector<int>&vis,int curr)
    {
        if(vis[curr]==2){     //if being processed (processing)
            return 1;
        }
        
        vis[curr]=2;   //processing
        
        for(int i=0;i<adj[curr].size();i++){
            if(vis[adj[curr][i]]!=1){    //if the adjoining directed nodes are not processed
                if(isCycle(adj,vis,adj[curr][i]))   return true;
            }
        }
        
        vis[curr]=1;    //processed
        return false;
    }
public:
    bool canFinish(int courses, vector<vector<int>>& prereq) {
//         making directed graph
        vector<vector<int>>adj(courses);
        for(int i=0;i<prereq.size();i++)   adj[prereq[i][0]].push_back(prereq[i][1]);
        
        vector<int>vis(courses,0);   //not visited
        
        for(int i=0;i<courses;i++){
            if(!vis[i]){    //not visited
                if(isCycle(adj,vis,i))   return false;
            }
            
        }
        
        return true;
    }
};

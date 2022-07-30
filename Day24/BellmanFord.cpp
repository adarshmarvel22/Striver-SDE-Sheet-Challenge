class node{
    public:
    int u,v,w;
    node(int f,int s,int wt){
        u=f,v=s,w=wt;
    }
};

int bellmonFord(int n, int m, int src, int dest, vector<vector<int>> &edges) {
    
//     int e=edges.size();
//     making directed graph using a vector of nodes
//     node structure is u,v,w
    vector<node>g;
    for(int i=0;i<m;i++){
//         int x,y,z;
//         cin>>x>>y>>z;
        g.push_back(node(edges[i][0],edges[i][1],edges[i][2]));
    }
//     max distance and distance array
    int inf=1e9;
    vector<int>dis(n+1,inf);
     dis[src]=0;
    
    for(int i=1;i<n;i++){
        for(auto it:g){
            if(dis[it.v]>dis[it.u]+it.w){
                dis[it.v]=dis[it.u]+it.w;
            }
        }
    }
    int fl=0;
    for(auto it:g){
        if(dis[it.v]>dis[it.u]+it.w){
                fl=1;
            }
    }
    if(dis[dest]>=9e8)   return inf;
    return dis[dest];
}

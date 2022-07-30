vector<int> dijkstra(vector<vector<int>> &v, int vertices, int edges, int src) {
   int INF=INT_MAX;
    // Write your code here.
   // make dag
    vector<pair<int,int>>g[vertices];
    
    for(int i=0;i<edges;i++){
        g[v[i][0]].push_back(make_pair(v[i][1],v[i][2]));
         g[v[i][1]].push_back(make_pair(v[i][0],v[i][2]));
    }
    //  minheap to maintain min distanc at top
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    // distance array
    vector<int>dis(vertices,INF);
    dis[src]=0;
    pq.push(make_pair(0,src));
    
    //  traversing from source
    
    while(!pq.empty()){
        int distance=pq.top().first;
        int curr_node=pq.top().second;
        
        pq.pop();
        
        vector<pair<int,int>>::iterator it;
        for(it=g[curr_node].begin();it!=g[curr_node].end();it++){
            int node=it->first;
            int next_node_dis=it->second;
            
            if(dis[node]>distance+next_node_dis){
                dis[node]=distance+next_node_dis;
                pq.push(make_pair(dis[node],node));
            }
        }
    }
    return dis;
}

#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int u,v,wt;
    node(int f,int s,int w){
        u=f,v=s,wt=w;
    }
};

bool comp(node a,node b){
    return a.wt<b.wt;
}

int findPar(int u, vector<int> &parent) {
    if(u == parent[u]) return u; 
    return parent[u] = findPar(parent[u], parent); 
}

void unionn(int u, int v, vector<int> &parent, vector<int> &rank) {
    u = findPar(u, parent);
    v = findPar(v, parent);
    if(rank[u] < rank[v]) {
        parent[u] = v;
    }
    else if(rank[v] < rank[u]) {
        parent[v] = u; 
    }
    else {
        parent[v] = u;
        rank[u]++; 
    }
}

int kruskalMST(int n, int m, vector<vector<int>> &graph) {
	
//    make node class and intialise vector to store graph
    vector<node>edges;
    for(int i=0;i<m;i++){
        int u,v,w;
        u=graph[i][0];
        v=graph[i][1];
        w=graph[i][2];
        edges.push_back(node(u,v,w));
//          edges.push_back(node(v,u,w));
    }
    sort(edges.begin(),edges.end(),comp);
    
    vector<int> parent(n+1,0);
    for(int i = 1;i<n+1;i++) 
    {   parent[i] = i; }
    
    vector<int> rank(n+1, 0);
    
    int cost = 0;
    vector<pair<int,int>> mst; 
    for(auto it : edges) {
        if(findPar(it.v, parent) != findPar(it.u, parent)) {
            cost += it.wt; 
            mst.push_back({it.u, it.v}); 
            unionn(it.u, it.v, parent, rank); 
        }
    }
    
    return cost;
}

int Solution::solve(vector<int> &a, int b) {
    map<int,int>vis;
    int x = 0;
    long long cnt=0;
    int n=a.size();
    for(int i=0;i<n;i++){
        x=x^a[i];
        if(x==b) cnt++;
        int y = x^b;
        if(vis.find(y)!=vis.end()){
            cnt=cnt+vis[y];
        }
        vis[x]++;
    }
    return cnt;
}

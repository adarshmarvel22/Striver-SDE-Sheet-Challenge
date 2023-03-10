class Solution {
public:
    int cherryPickup(vector<vector<int>>& a) {
        int n=a.size();
        int m=a[0].size();
        
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(m,vector<int>(m,-1)));
        
        return f(0,0,m-1,a,n,m,dp);
    }
    int f(int i,int j1,int j2,vector<vector<int>>&a,int n,int m,vector<vector<vector<int>>>&dp){
        if(i>=n || j1>=m || j2>=m || j1<0 ||j2<0){
            return -1e8;
        }
        
        if(dp[i][j1][j2]!=-1)   return dp[i][j1][j2];
        
        if(i==n-1){
            if(j1==j2)  return a[i][j1];
            else return a[i][j1]+a[i][j2];
        }
//         -1 +0 +1
        int ans=0;
        for(int x=-1;x<=1;x++){
            for(int y=-1;y<=1;y++){
                    if(j1 == j2){
                        ans=max(ans,a[i][j1]+f(i+1,x+j1,y+j2,a,n,m,dp));
                    }
                    else{
                        ans=max(ans,a[i][j1]+a[i][j2]+f(i+1,x+j1,y+j2,a,n,m,dp));
                    }
            }
        }
        
        return dp[i][j1][j2]=ans;
    }
};

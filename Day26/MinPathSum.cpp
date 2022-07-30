class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        
        return minpath(0,0,m,n,grid,dp);
    }
    int minpath(int i,int j,int m,int n,vector<vector<int>>& grid,vector<vector<int>>&dp){
        if(i==m-1&&j==n-1)  return grid[i][j];
        if(i>=m||j>=n)  return 1e9;
        if(dp[i][j]!=-1)   return dp[i][j];
//         left
        int ans=grid[i][j]+minpath(i+1,j,m,n,grid,dp);
//         right
        ans=min(ans,grid[i][j]+minpath(i,j+1,m,n,grid,dp));
        
        return dp[i][j]=ans;
    }
};

int knapsack(int idx,int w,vector<int>&val,vector<int>&wt,int n,vector<vector<int>>&dp){
    if(idx>=n)  return 0;
    
    if(dp[idx][w]!=-1)   return dp[idx][w];
    int ans=0;
    if(w-wt[idx]>=0){
        ans=val[idx]+knapsack(idx+1,w-wt[idx],val,wt,n,dp);
    }
    ans=max(ans,knapsack(idx+1,w,val,wt,n,dp));
    
    return dp[idx][w]=ans;
}

int maxProfit(vector<int> &val, vector<int> &wt, int n, int w)
{    
    vector<vector<int>>dp(n,vector<int>(w+1,-1));
    int ans=knapsack(0,w,val,wt,n,dp);
    return ans;
}

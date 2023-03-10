class Solution {
public:
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        int ans=f(0,n,dp);
        return ans;
    }
    int f(int cur_sum,int n,vector<int>&dp){
        if(cur_sum>n)  return 0;
        if(cur_sum==n)  return 1;
        
        if(dp[cur_sum]!=-1)  return dp[cur_sum];
        
        int one=f(cur_sum+1,n,dp);
        int two=f(cur_sum+2,n,dp);
        
        return dp[cur_sum]=one+two;
    }
};

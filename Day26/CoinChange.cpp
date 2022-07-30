class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        
        vector<vector<int>>dp(coins.size(),vector<int>(amount+1,-1));
       int ans=count(0,amount,coins,dp);
        if(1e9==ans)   return -1;
        return ans;
    }
    int count(int idx,int amount,vector<int>&coins,vector<vector<int>>&dp){
        if(amount==0)  return 0;
         if(idx>=coins.size())  return 1e9;
        if(dp[idx][amount]!=-1)   return dp[idx][amount];
//         not take
        int ans=count(idx+1,amount,coins,dp);
//         take
        if(coins[idx]<=amount)
            ans=min(ans,1+count(idx,amount-coins[idx],coins,dp));
        
        return dp[idx][amount]=ans;
    }
};

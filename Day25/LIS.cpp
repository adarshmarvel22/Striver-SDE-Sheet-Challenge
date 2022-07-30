class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        
        int prev_idx=-1,idx=0;
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        
        int ans=lis(idx,prev_idx,n,nums,dp);
        
        return ans;
    }
    
    int lis(int idx,int prev_idx,int n,vector<int>&nums,vector<vector<int>>&dp){
        if(idx==n)   return 0;
        
        if(dp[idx][prev_idx+1]!=-1)  return dp[idx][prev_idx+1];
        
        int len=lis(idx+1,prev_idx,n,nums,dp);
        
        if(prev_idx==-1||nums[idx]>nums[prev_idx]){
           len=max(len,1+lis(idx+1,idx,n,nums,dp));
        }
        return dp[idx][prev_idx+1]=len;
    }
};

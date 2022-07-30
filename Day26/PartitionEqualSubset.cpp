class Solution {
public:
    bool canPartition(vector<int>& nums) {
        
        int sum=0;
        int n=nums.size();
        for(auto i:nums)   sum+=i;
        
        if(sum%2)   return 0;
        
        vector<vector<int>>dp(n,vector<int>((sum/2)+1,-1));
        return subset(0,sum/2,n,nums,dp);
    }
    int subset(int idx,int target,int n,vector<int>&nums,vector<vector<int>>&dp){
        if(target==0)  return 1;
      
        if(idx==n)   return 0;
        if(dp[idx][target]!=-1)   return dp[idx][target];
        
        bool ans2=0;
        bool ans1=subset(idx+1,target,n,nums,dp);
        if(target-nums[idx]>=0)
           ans2=subset(idx+1,target-nums[idx],n,nums,dp);
        
        return dp[idx][target]=ans1||ans2;
    }
};

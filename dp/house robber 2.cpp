class Solution {
public:
    int rob(vector<int>& a) {
        int n=a.size();
        
        if(n==1)  return a[0];
        
        vector<int>tmp1,tmp2;
        
        for(int i=0;i<n;i++){
            if(i!=0)  tmp1.push_back(a[i]);
            if(i!=n-1)  tmp2.push_back(a[i]);
        }
        
        vector<int>dp1(n,-1),dp2(n,-1);
        int ans=f(0,tmp1,n-1,dp1);
        ans=max(ans,f(0,tmp2,n-1,dp2));
        
        return ans;
    }
        int f(int idx,vector<int>&a,int n,vector<int>&dp){
        if(idx>=n)  return 0;
        
        if(dp[idx]!=-1)  return dp[idx];
        
//         take
        int take=a[idx]+f(idx+2,a,n,dp);
        int not_take=f(idx+1,a,n,dp);
        
        return dp[idx]=max(take,not_take);
    }
};

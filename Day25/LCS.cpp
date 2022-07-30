class Solution {
public:
    int longestCommonSubsequence(string s1, string s2) {
        int n=s1.size(),m=s2.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        
        return lcs(0,0,s1,s2,n,m,dp);
    }
    
    int lcs(int i1,int i2,string &s1,string &s2,int n,int m,vector<vector<int>>&dp){
        if(i1>=n||i2>=m)   return 0;
        
        if(dp[i1][i2]!=-1)  return dp[i1][i2];
        
        int len=0;
        if(s1[i1]==s2[i2]){
            len=1+lcs(i1+1,i2+1,s1,s2,n,m,dp);
        }
        len=max(len,lcs(i1+1,i2,s1,s2,n,m,dp));
        len=max(len,lcs(i1,i2+1,s1,s2,n,m,dp));
        
        return dp[i1][i2]=len;
    }
};

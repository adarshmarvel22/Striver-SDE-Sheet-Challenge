//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    
    public:
int fx(int e, int f, vector<vector<int>>&dp) 
    {
        // your code here
       
        if(f==0||f==1)  return f;
        if(e==1)   return f;
        
        if(dp[e][f]!=-1)  return dp[e][f];
        int mi=INT_MAX;
        for(int k=1;k<=f;k++){
            int temp=1+max(fx(e-1,k-1,dp),fx(e,f-k,dp));
            mi=min(mi,temp);
        }
        
        return dp[e][f]=mi;
    }
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.
    int eggDrop(int e, int f) 
    {
        // your code here
        vector<vector<int>>dp(202,vector<int>(202,-1));

        return fx(e,f,dp);
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking eggs and floors count
        int n, k;
        cin>>n>>k;
        Solution ob;
        //calling function eggDrop()
        cout<<ob.eggDrop(n, k)<<endl;
    }
    return 0;
}

// } Driver Code Ends

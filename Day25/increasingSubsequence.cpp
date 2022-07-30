// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
		

	public:
		int isum(int idx,int prev_idx,int arr[],int n,vector<vector<int>>&dp){
	    if(idx>=n)   return 0;
	    
	    if(dp[idx][prev_idx+1]!=-1)   return dp[idx][prev_idx+1];
	   // not take
	   int sum=isum(idx+1,prev_idx,arr,n,dp);
	   //  take
	   if(arr[idx]>arr[prev_idx]||prev_idx==-1){
	       sum=max(sum,arr[idx]+isum(idx+1,idx,arr,n,dp));
	   }
	   
	   return dp[idx][prev_idx+1]=sum;
	}
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    vector<vector<int>>dp(n,vector<int>(n+1,-1));
	    return isum(0,-1,arr,n,dp);
	}  

};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends

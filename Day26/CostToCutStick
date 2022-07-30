class Solution {
public:
    int f(int i, int j, vector<int> &a, vector<vector<int>> &dp) {
        if(i > j) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        int ans = 1e9;
        for(int ind=i; ind<=j; ind++) {
            int cost = a[j+1] - a[i-1] + f(i, ind-1, a, dp) + f(ind+1, j, a, dp);
            ans = min(ans, cost);
        }
        return dp[i][j] = ans;
    }
    int minCost(int n, vector<int>& cuts) {
        
       // for(auto i:cuts)  cout<<i<<" ";
        
        int sz = cuts.size();
        cuts.push_back(n);
        cuts.insert(cuts.begin(), 0);
        // for(auto i:cuts)  cout<<i<<" ";
//         0 1 3 4 5 7 0 5 6 1 4 2 9 
         sort(cuts.begin(), cuts.end());
        
        vector<vector<int>> dp(sz+1, vector<int> (sz+1, -1));
               
        return f(1, sz, cuts, dp);
    }
};

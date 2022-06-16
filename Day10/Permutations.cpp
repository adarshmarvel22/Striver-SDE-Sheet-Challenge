#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define p_b push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define vvi vector<vector<int>> 
#define vi vector<int> 

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vvi ans;
        // vector<int>ds;
        int n=nums.size();
     
        prmt(0,nums,ans);
            
        return ans;
    }
  void prmt(int idx,vi&nums,vvi&ans){
      if(idx>(nums.size()-1)){
          ans.p_b(nums);
      }
      rep(i,idx,nums.size()){
          swap(nums[idx],nums[i]);
          prmt(idx+1,nums,ans);
          swap(nums[idx],nums[i]);
      }
  }
};

#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define vvi vector<vector<int>> 
#define SZ(x) ((int)(x).size())
typedef vector<int> VI;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vvi ans;
        vector<int>v;
        set<vector<int>>s;
 rep(i,0,nums.size()){
     int l=i+1,r=nums.size()-1;
     while(l<r){
         int t=nums[l]+nums[r]+nums[i];
         if(t==0){
             v.pb(nums[i]);             v.pb(nums[r]);
             v.pb(nums[l]);
         // ans.pb(v);
             s.insert(v);
             v.clear();
         }
         if(t<0)  l++;
         else r--;
     }
 }
        for(auto i:s){
            ans.pb(i);
        }
        return ans;
    }
};

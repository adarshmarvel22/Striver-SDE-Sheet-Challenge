#pragma GCC optimize("O1")
#pragma GCC optimize("O2")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rpt(i,a,b) for(int i=a;i<b;i+=2)
#define rev(i,a,b) for(int i=a;i>=b;i--)
#define vi vector<int>
# define ll long long int
#define inf 1e9
#define v2d vector<vector<int>>
#define v1d vector<int>
# define vll vector<long long int>
# define vvi vector<pair<int,int>>
# define vc vector<pair<char,char>>
#define mp make_pair
#define pb(x) push_back(x)
#define ff first
#define be(x) begin(x) end(x)


class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
       int n=nums.size();
        sort(nums.begin(),nums.end());
        // vector<vector<int>>res;
        set<vector<int>>ansx;
        rep(i,0,n){
            rep(j,i+1,n){
                ll twosum1=target-(nums[i]+nums[j]);
                int l=j+1;
                int r=n-1;
                while(l<r){
                    if((nums[l]+nums[r])<twosum1) l++;
                    else if(((nums[l]+nums[r])>twosum1))   r--;
                    else{
                        vector<int>ans(4,0);
                        ans[0]=(nums[i]);
                         ans[1]=(nums[j]);
                         ans[2]=(nums[l]);
                         ans[3]=(nums[r]);
                        // res.pb(ans);
                        ansx.insert(ans);
                        while(l<r&&nums[l]==ans[2]) ++l;
                        while(l<r&&nums[r]==ans[3])  --r;
                    }
                }
            }
        }
        vector<vector<int>>res(ansx.begin(),ansx.end());
        return res;
        
    }
};

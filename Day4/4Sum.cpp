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
            int n = nums.size();
        
        sort(nums.begin(),nums.end());
      
       set<vector<int>> sv;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
    
                for(int k=j+1;k<n;k++)
                { 
                  
                   int x = (long long)target - 
                           (long long)nums[i]-
                           (long long)nums[j]-(long long)nums[k];
                   
                        if(binary_search(nums.begin()+k+1,nums.end(),x)){
                            vector<int> v;
                            v.push_back(nums[i]);
                            v.push_back(nums[j]);
                            v.push_back(nums[k]);
                            v.push_back(x);
                            sort(v.begin(),v.end());
                            sv.insert(v);
                        }
                }
            }
        }
        vector<vector<int>> res(sv.begin(),sv.end());
        return res;
    }
};

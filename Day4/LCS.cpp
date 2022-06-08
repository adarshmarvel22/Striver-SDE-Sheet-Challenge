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
#define m_p make_pair
#define pb(x) push_back(x)
#define ff first
#define be(x) begin(x) end(x)
#define rbe(x) rbegin(x) rend(x)
#define ss second
ll gcd(ll a,ll b){ if(b==0)return 0; return gcd(b,a%b);}
#define all1(x) x.begin(),x.end()

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       int n=nums.size();
        set<int>s;
        int ans=0;
        rep(i,0,n){
          s.insert(nums[i]);  
        }
        rep(i,0,n){
            if(s.find(nums[i]-1)==s.end()){
                int x=0;
                while(s.find(nums[i]+x)!=s.end()){
                    x++;
                }
                ans=max(ans,x);
            }
        }
        return ans;
    }
};

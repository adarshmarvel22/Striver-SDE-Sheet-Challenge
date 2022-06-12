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

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s;
        
        rep(i,0,nums.size())   s.insert(nums[i]);
        int j=0;
        for(auto i:s){
            nums[j]=i;
            j++;
        }
        return j;
    }
};

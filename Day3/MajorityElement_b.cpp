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
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        rep(i,0,nums.size())  mp[nums[i]]++;
        for(auto i:mp) if(i.second>nums.size()/2)  return i.first;
        return 0;
    }
};

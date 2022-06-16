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
#define p_b(x) push_back(x)
#define ff first

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        rep(i,0,nums.size()-1){
            if((nums[i]^nums[i+1])!=0){return nums[i];}
         else {i++;}
        }
        return nums[nums.size()-1];
    }
};

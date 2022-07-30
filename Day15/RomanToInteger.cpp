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
# define vc vector<pair<char,char>>
#define mp make_pair
#define pb(x) push_back(x)
#define ff first
#define ss second
ll gcd(ll a,ll b){ if(b==0)return 0; return gcd(b,a%b);}
#define all1(x) x.begin(),x.end()

class Solution {
public:
    int romanToInt(string s) {
        map<char,int>mp;
        int ans=0;
        
        mp['I']=1;  mp['V']=5;  mp['X']=10;   mp['L']=50;
        mp['C']=100;        mp['D']=500;mp['M']=1000;
rep(i,0,s.size()){
    if(mp[s[i]]<mp[s[i+1]]){
        ans+=(mp[s[i+1]]-mp[s[i]]);
        i++;
    }
    else  ans+=mp[s[i]];
}
  return ans;
        
    }
};

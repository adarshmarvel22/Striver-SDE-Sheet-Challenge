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
#define be(x) begin(x) end(x)
#define rbe(x) rbegin(x) rend(x)
#define ss second
ll gcd(ll a,ll b){ if(b==0)return 0; return gcd(b,a%b);}
#define all1(x) x.begin(),x.end()

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& a, vector<int>& b) {
        int n=a.size();
        int m=b.size();
        v1d ans;
      
        rep(i,0,n){
            rep(j,0,m){
                if(a[i]==b[j]){
                    int t=0;
                    while(j<m){
                        if(b[j]>a[i]){
                            t=1;
                            ans.p_b(b[j]);
                            break;
                        }
                        j++;
                    }
                    if(t)  break;
                    else{
                        ans.p_b(-1);
                        break;
                    }
                }
            }
        }
        
        return ans;
    }
};

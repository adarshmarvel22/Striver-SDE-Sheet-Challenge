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
    vector<vector<int>> threeSum(vector<int>& a) {
        int n=a.size();
       set<int>s;
        
        int t=0;
        v2d ans;
       v1d ds;
        int l,r,t2;
       sort(a.begin(),a.end());
        rep(i,0,n){
            t2=t-a[i];
            l=i+1;
            r=n-1;
            while(l<r){
               if((a[l]+a[r])<t2)  l++;
                else if((a[l]+a[r])>t2)  r--;
                else if((a[l]+a[r])==t2){
                    ds.p_b(a[i]);
                    ds.p_b(a[l]);
                    int w=a[l];
                    int x=a[r];
                    ds.p_b(a[r]);
                    ans.p_b(ds);
                    ds.clear();
                  
                     while(l<r&&a[l]==w) l++;
                     while(l<r&&a[r]==x) r--;
                }

            }
            while(i+1<n&&a[i+1]==a[i]) i++;
        }
        
        return ans;
    }
};

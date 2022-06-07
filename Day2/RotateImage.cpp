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
    void rotate(vector<vector<int>>& matrix) {
        int r=matrix.size();
        // vvi v(r,vector<int>(r));
        vvi v(r);
        
        for(int i=0;i<r;i++){
            for(int j=r-1;j>=0;j--){
                v[i].pb(matrix[j][i]);
            }
        }
        // for(auto i:v[0]) cout<<i;
        rep(i,0,r){
            rep(j,0,r){
                matrix[i][j]=v[i][j];
            }
        }
    }
};

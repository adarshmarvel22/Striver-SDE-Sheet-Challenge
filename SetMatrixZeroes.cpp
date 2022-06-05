
#define rep(i,a,b) for(int i=a;i<b;i++)
#define vi vector<int>
# define ll long long int
#define inf 1e9
#define v2d vector<vector<int>>
#define v1d vector<int>
# define vll vector<long long int>
# define vvi vector<pair<int,int>>
#define mp make_pair
#define pb(x) push_back(x)
#define ff first
#define ss second

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vvi v;
        rep(i,0,m){
            rep(j,0,n){
                if(matrix[i][j]==0){
                    v.pb(mp(i,j));
                }
            }
        }
        for(auto i:v){
                                int x=0,y=0;
                    while(x<m)  {
                         matrix[x][i.ss]=0;
                        x++;
                    }
                   
                    while(y<n){
                         matrix[i.ff][y]=0;
                        y++;
                    }
        }
        
    }
};

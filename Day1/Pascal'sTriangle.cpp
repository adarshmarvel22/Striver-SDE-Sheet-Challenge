#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define pb push_back
#define mp make_pair
long long int result[1000] = {0};
class Solution {
public:

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> p(numRows);
        rep(i,0,numRows){
            p[i].resize(i+1);
            p[i][0]=p[i][i]=1;
            rep(j,1,i){
                p[i][j]=p[i-1][j-1]+p[i-1][j];
            }
        }
        return p;
    }
};

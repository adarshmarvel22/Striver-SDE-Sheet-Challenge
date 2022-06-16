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
    bool isvalid(int row,int col,char c,vector<vector<char>>&b){
     for (int i = 0; i < 9; i++) {
    if (b[i][col] == c)
      return false;

    if (b[row][i] == c)
      return false;
// this line below formula
    if (b[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c)
      return false;
  }
  return true;
    }
    
    bool solve(vector<vector<char>>&b){
        
        rep(i,0,9){
            rep(j,0,9){
                if(b[i][j]=='.'){
                    for(char c='1';c<='9';c++){
                        if(isvalid(i,j,c,b)){
                            b[i][j]=c;
                            if(solve(b))  return true;
                            else b[i][j]='.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};

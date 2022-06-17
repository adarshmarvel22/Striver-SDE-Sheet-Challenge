#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
class Solution {
public:
    bool valid(int i,int j,int r,int c){
        if(i<0||j<0||i>=r||j>=c)  return false;
        return true;
        
    }
    int orangesRotting(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        int no_of_ones=0;
        queue<pair<int,int>>q;
        rep(i,0,r){
            rep(j,0,c){
                if(grid[i][j]==2)  q.push({i,j});
                if(grid[i][j]==1)  no_of_ones++;
            }
        }
        if(no_of_ones == 0) return 0;
        int count=0;
        while(!q.empty()){
            int x=q.size();
                        while(x--){
            int i=q.front().first;
            int j=q.front().second;

            if(valid(i+1,j,r,c)&&grid[i+1][j]==1){
                q.push({i+1,j});
                grid[i+1][j]=2;
            }
            if(valid(i,j+1,r,c)&&grid[i][j+1]==1){
                q.push({i,j+1});
                grid[i][j+1]=2;
            }
            if(valid(i-1,j,r,c)&&grid[i-1][j]==1){
                q.push({i-1,j});
                grid[i-1][j]=2;
            }
            if(valid(i,j-1,r,c)&&grid[i][j-1]==1){
                q.push({i,j-1});
                grid[i][j-1]=2;
            }
            q.pop();
       
        }
                 count++;
        }

        for(vector<int>it:grid){
            for(int x:it){
                if(x==1)  return -1;
            }
        }
        return count-1;
    }
};

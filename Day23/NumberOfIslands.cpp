class Solution {
public:
    void put_zero(int i,int j,int row,int col,vector<vector<char>>& grid){
        if(i<0||j<0||i>=row||j>=col)  return;
        
        if(grid[i][j]=='0')  return;
        grid[i][j]='0';
        put_zero(i-1,j,row,col,grid);
        put_zero(i+1,j,row,col,grid);
        put_zero(i,j-1,row,col,grid);
        put_zero(i,j+1,row,col,grid);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        
        int cnt=0;
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]=='1'){
                    cnt++;
//                     dfs
                    put_zero(i,j,row,col,grid);
                }
            }
        }
        return cnt;
    }
};

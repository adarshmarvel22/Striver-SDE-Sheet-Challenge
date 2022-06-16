class Solution {
public:
    bool isvalid(int row,int col,vector<string>&board,int n){
        
        int x=row;
        while(x>=0){
            if(board[x][col]=='Q')  return false;
            x--;
        }
        
        x=row;int y=col;
        while(x>=0&&y>=0){
            if(board[x][y]=='Q')  return false;
            x--;
            y--;
        }
        
    x=row;y=col;
        while(x>=0&&y<n){
            if(board[x][y]=='Q')  return false;
            x--;
            y++;
        }
        
        return true;
    }
    
    void putQueens(int row,vector<string>&board,vector<vector<string>>&ans,int n){
        if(row==n){
            ans.push_back(board);
            return;
        }
        
        for(int i=0;i<n;i++){
            if(isvalid(row,i,board,n)){
                board[row][i]='Q';
                putQueens(row+1,board,ans,n);
                board[row][i]='.';
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board;
    string s(n,'.');
        for(int i=0;i<n;i++){
            board.push_back(s);
        }
        putQueens(0,board,ans,n);
        
        return ans;
        
    }
};

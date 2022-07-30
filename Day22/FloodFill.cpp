class Solution {
public:
    void dfs(vector<vector<int>>& image, int sr, int sc, int newColor,int r,int c,int src){
        if(sr<0||sr>=r||sc<0||sc>=c)  return;
        else if(image[sr][sc]!=src)  return;
        
        image[sr][sc]=newColor;
        dfs(image,sr-1,sc,newColor,r,c,src);
         dfs(image,sr+1,sc,newColor,r,c,src);
         dfs(image,sr,sc-1,newColor,r,c,src);
         dfs(image,sr,sc+1,newColor,r,c,src);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        // vector<vector<int>> vec( n , vector<int> (m, 0));
//          n=rows
        if(newColor==image[sr][sc])   return image;
        
        int r=image.size();
        int c=image[0].size();
        int src=image[sr][sc];
        dfs(image,sr,sc,newColor,r,c,src);
        return image;
    }
};

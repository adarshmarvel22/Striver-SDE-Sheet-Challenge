class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l=0;
        if(!matrix.size()) return false;
        int h=(matrix[0].size()*matrix.size())-1;
        int m;
        
        while(l<=h){
            m=(l+(h-l)/2);
            if(matrix[m/matrix[0].size()][m%matrix[0].size()]==target){
                return true;
            }
            if(matrix[m/matrix[0].size()][m%matrix[0].size()]<target){
                l=m+1;
            }
            else{
                h=m-1;
            }

        }
        return 0;
    }
};

class Solution {
public:
    void find(int i,int t,vector<int>ds,vector<vector<int>>&ans,vector<int>& c){
        if(t<0)  return;
        if(i==c.size()){
            if(t==0)  ans.push_back(ds);
            return;
        }
        
        if(i>c.size())  return;
        
        ds.push_back(c[i]);
        find(i,t-c[i],ds,ans,c);
        ds.pop_back();
        find(i+1,t,ds,ans,c);
        
        return;
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        
        find(0,target,ds,ans,candidates);
           
        return ans;
    }
};

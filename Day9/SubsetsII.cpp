class Solution {
public:
    void subset(vector<int>& nums,int i,set<vector<int>>&ans,vector<int>ds){
        if(i==nums.size()){
            sort(ds.begin(),ds.end());
            ans.insert(ds);
            return;
        }
        if(i>nums.size())  return;
        
        ds.push_back(nums[i]);
        subset(nums,i+1,ans,ds);
        ds.pop_back();
        subset(nums,i+1,ans,ds);
        
        return;
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>res;
            
        set<vector<int>>ans;
        vector<int>ds;
            
        subset(nums,0,ans,ds);
        for(auto x:ans){
            res.push_back(x);
        }
        
        return res;
    }
};

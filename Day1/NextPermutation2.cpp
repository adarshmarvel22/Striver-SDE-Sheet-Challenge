class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        set<vector<int>>s;
        int n=nums.size();
        
        f(0,s,nums,n);
        
        // for(auto i=s.begin();i!=s.end();i++){
        //       if(*i==nums){
        //           i++;
        //           nums.clear();
        //           nums=*i;
        //           break;
        //       }
        // }
        auto pos = s.find(nums);
        pos++;
        if(pos!=s.end()){
        nums.clear();
        nums=*pos;
        }
        else{
  nums.clear();
            auto a=s.begin();
            nums=*a;
        }

    }
    void f(int i,set<vector<int>>&s,vector<int>&nums,int n){
        if(i>=n){
            s.insert(nums);
            return;
        }
        
        for(int j=i;j<n;j++){
            swap(nums[i],nums[j]);
            f(i+1,s,nums,n);
            swap(nums[i],nums[j]);
        }
    }
};

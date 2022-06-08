class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt=0;
        int maxim=0;
        if(nums.size()==0)  return 0;
        if(nums.size()==1)  return 1;
        for(int i=0;i<nums.size()-1;i++){
            
            if((nums[i+1]-nums[i])==1) cnt++;
             else if((nums[i+1]-nums[i])==0) {}
            else if((nums[i+1]-nums[i])!=1){
                cnt=0;
            }
            if(cnt>maxim)  maxim=cnt;
        }
        return maxim+1;
    }
};

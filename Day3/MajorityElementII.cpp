class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       int n1=-1,n2=-1,c1=0,c2=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==n1)  c1++;
            else if(nums[i]==n2)  c2++;
            else if(c1==0){
                n1=nums[i];
                c1=1;
            }
            else if(c2==0){
                n2=nums[i];
                c2=1;
            }
            else{
                c1--;
                c2--;
            }
        }  
        vector < int > ans;
  int count1 =0, count2 = 0;
  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] == n1)
      count1++;
    else if (nums[i] == n2)
      count2++;
  }
  if (count1 > nums.size() / 3)
    ans.push_back(n1);
  if (count2 > nums.size()/ 3)
    ans.push_back(n2);
  return ans;
          
        }

};

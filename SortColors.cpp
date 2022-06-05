#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for (int i=a;i<n;i++)

class Solution {
public:
    void sortColors(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
int l=0;
        int mid=0;
        int r=nums.size()-1;
        
        while(mid<=r){
            if(nums[mid]==1) mid++;
            else if(nums[mid]==0){
                swap(nums[mid],nums[l]);
                mid++;
                l++;
            }
            else if(nums[mid]==2){
                swap(nums[mid],nums[r]);
                // mid++;
                r--;
            }
        }
        
    }
};

class Solution {
public:
    int maxProduct(vector<int>& a) {
        int n=a.size();
        int ans=a[0];
        int mx=a[0],mi=a[0];
        
        for(int i=1;i<n;i++){
            if(a[i]<0)   swap(mx,mi);
            mx=max(a[i],a[i]*mx);
            mi=min(a[i],a[i]*mi);
            ans=max(ans,mx);
        }
        
        return ans;
    }
};

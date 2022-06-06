class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        if(n==1){
            return intervals;
        }
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        int a= intervals[0][0];
        int b= intervals[0][1];
        for(int i=1;i<n;i++){
        int c= intervals[i][0];
        int d= intervals[i][1];
        if(c>=a && c<=b ){
                a=min(a,c);
                b=max(b,d);
            if(i==n-1){
                ans.push_back({a,b});
            }
        }else{
            ans.push_back({a,b});
            a=c;
            b=d;
            if(i==n-1){
                ans.push_back({c,d});
            }
        }
        }
      return ans;  
    }
};

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int m=INT_MAX;
        int n=strs.size();
      
        for(int i=0;i<n;i++){
            int x=strs[i].size();
            m=min(m,x);
        }
        string ans="";
          if(n==1) return strs[0];
        bool ok=false;
        for(int i=0;i<m;i++){
            char c=strs[0][i];
            for(int j=1;j<n;j++){
                if(strs[j][i]==c){}
                
                if(strs[j][i]!=c){
                    ok=true;
                    break;
                }
                if(j==n-1) ans+=c;
            }
            if(ok)  break;
        }
        return ans;
    }
};

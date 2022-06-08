class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int>mp;
    
        int x=s.size();
        int len=0;int l=0;
       for(int r=0;r<s.size();r++){
          if((mp[s[r]]++)==0){}
           else{
               // mp[s[l]]--;
               // l++;
               while(mp[s[r]]>1){
                   mp[s[l]]--;
               l++;
               }
           }
           len=max(len,(r-l)+1);
       }
        return len;
    }
};

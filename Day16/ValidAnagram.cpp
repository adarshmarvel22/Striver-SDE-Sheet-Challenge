class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>mp;
        map<char,int>mp2;
        int i=0,j=0;
        while(i<s.size()){
            mp[s[i]]++;i++;
        }
        while(j<t.size()){
            mp2[t[j]]++;j++;
        }
        if(mp==mp2) return true;
        else return false;
        
        return false;
    }
};

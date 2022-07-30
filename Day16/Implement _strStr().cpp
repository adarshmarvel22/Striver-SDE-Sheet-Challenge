class Solution {
public:
    int strStr(string haystack, string needle) {
        
        if(needle.size()==0)   return 0;

       size_t idx= haystack.find(needle);
        
        if (idx != string::npos)
        // if(idx!=haystack.end()) 
            return idx;
        
        return -1;
    }
};
// z function algo

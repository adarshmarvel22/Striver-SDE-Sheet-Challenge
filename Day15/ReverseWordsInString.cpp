class Solution {
public:
    
    string reverseWords(string s) {
        
        string r;
        
        int word_length = 0;
        int word_count = 0;
        for (int i = s.size(); i-- > 0;) {
            
            if (s[i] != ' ') {
                ++word_length;
            }
            else {
                if (word_length != 0) {
                    if (word_count != 0) {
                        r.append(" ");
                    }
                    r.append(s, i + 1, word_length);
                    word_length = 0;
                    ++word_count;
                }
                
            }
            
        }
        
        if (word_length != 0) {
            if (word_count != 0) {
                r.append(" ");
            }
            r.append(s, 0, word_length);
        }
        
        
        return r;
    }
};

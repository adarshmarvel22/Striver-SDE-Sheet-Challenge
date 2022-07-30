class Trie {
public:
    set<string>s;
    bool isexist(string x,string prefix){
        int n=prefix.size();
        for(int i=0;i<n;i++){
            if(x[i]==prefix[i]){}
                else return 0;
        }
        return 1;
    }
    
    Trie() {
        
    }
    
    void insert(string word) {
         s.insert(word);    
    }
    
    bool search(string word) {
        if(s.find(word)!=s.end())  return 1;
        return 0;
    }
    
    bool startsWith(string prefix) {
        for(auto i:s){
            if(isexist(i,prefix)){
                return 1;
            }
        }
        return 0;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */

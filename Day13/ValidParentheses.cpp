class Solution {
public:
    bool check(char c1,char c2){
        if(c1==')'&&c2=='(')   return true;
        else if(c1=='}'&&c2=='{')   return true;
        else if(c1==']'&&c2=='[')   return true;
        
        return false;
    }
    bool close(char ch){
        if(ch==')'||ch=='}'||ch==']')  return true;
        return false;
    }
    
    bool isValid(string s) {
        int x=s.size();
        if(!(x%2==0))  return false;
        stack<char>st;
       for(int i=0;i<x;i++){
           if(s[i]=='('||s[i]=='{'||s[i]=='[')  st.push(s[i]);
           else{
               if(st.empty())  return false;
               char c2=st.top();  st.pop();  char c1=s[i];
               if(check(c1,c2)){}
               else return false;
           }
           
       }
        if(st.empty()) return true;
        return false;
    }
};

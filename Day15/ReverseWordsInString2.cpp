#define rep(i,a,b) for(int i=a;i<b;i++)
#define rpt(i,a,b) for(int i=a;i<b;i+=2)
#define rev(i,a,b) for(int i=a;i>=b;i--)
#define vi vector<int>
# define ll long long int
#define inf 1e9
#define v2d vector<vector<int>>
#define v1d vector<int>
# define vll vector<long long int>
# define vvi vector<pair<int,int>>
# define vc vector<pair<char,char>>
#define m_p make_pair
#define p_b(x) push_back(x)
#define ff first
#define be(x) begin(x) end(x)
#define rbe(x) rbegin(x) rend(x)
#define ss second
#define all1(x) x.begin(),x.end()

class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        string temp="";
        stack<string>st;
        
 
        rep(i,0,s.size()){
         // if((s[i]>=97&&s[i]<=122)||(s[i]>=65)&&s[i]<=91)
            if(s[i]!=' ')
         {
             temp+=s[i];
         }
            else{
                if(temp.size()>=1)
                st.push(temp);
                temp="";
            }
            if(i==s.size()-1){
                          if(temp.size()>=1)
                              st.push(temp);
                temp="";
            }
        }
        
        // while(!st.empty()){
        //     cout<<st.top()<<endl;st.pop();
        // }
       
        while(!st.empty()){
            ans+=st.top();
            st.pop();
            if(ans.size()>=1)
            ans+=' ';
        }
        ans.pop_back();
        
        return ans;
    }
};

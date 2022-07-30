#define rep(i,a,b) for(int i=a;i<b;i++)
#define rpt(i,a,b) for(int i=a;i<b;i+=2)
#define rev(i,a,b) for(int i=a;i>=b;i--)

#define inf 1e9
#define v2d vector<vector<int>>

#define m_p make_pair
#define p_b(x) push_back(x)
#define ff first
#define be(x) begin(x) end(x)
#define rbe(x) rbegin(x) rend(x)
#define ss second

#define si             set <int>
#define vi             vector <int>
#define pii            pair <int, int>
#define vpi            vector <pii>
#define vpp            vector <pair<int, pii>>
#define mii            map <int, int>
#define mpi            map <pii, int>
#define spi            set <pii>
#define endl           "\n"
#define sz(x)          ((int) x.size())
#define all(p)         p.begin(), p.end()
#define double         long double
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        v2d ds;
        if(!root)  return ds;
        queue<TreeNode*>q;
        q.push(root);
        
        vi v;
        int x=0;
        while(!q.empty()){
            int n=q.size();
            // v.resize(n);
            rep(i,0,n){
                TreeNode*tmp=q.front();
                q.pop();
                v.p_b(tmp->val);
                if(tmp->left)   q.push(tmp->left);
                if(tmp->right)   q.push(tmp->right);
                
            }
            if(x%2)   reverse(all(v));
            ds.p_b(v);
            v.clear();
            x++;
        }
        
        return ds;
    }
};

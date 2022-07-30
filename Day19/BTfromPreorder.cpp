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
// #define int            long long int

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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int>mp;
          rep(i,0,inorder.size())   mp[inorder[i]]=i;
        TreeNode*root=buildTree(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,mp);
        return root;
    }
    
    TreeNode* buildTree(vi& preorder,int preS,int preE,vi& inorder,int inS,int inE,mii& mp){
        if(preS>preE||inS>inE)  return NULL;
        
        TreeNode*root=new TreeNode(preorder[preS]);
        
        int root_idx=mp[root->val];
        int preLeft=root_idx-inS;
        
        root->left=buildTree(preorder,preS+1,preS+preLeft,inorder,inS,root_idx-1,mp);
        root->right=buildTree(preorder,preS+preLeft+1,preE,inorder,root_idx+1,inE,mp);
        
        return root;
    }
};

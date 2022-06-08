#define rep(i,a,b) for(int i=a;i<b;i++)
#define rpt(i,a,b) for(int i=a;i<b;i+=2)
# define ll long long int
#define inf 1e9
# define vll vector<long long int>
# define vc vector<pair<char,char>>
#define mp make_pair
#define pb(x) push_back(x)
#define ff first
#define ss second
ll gcd(ll a,ll b){ if(b==0)return 0; return gcd(b,a%b);}
#define all1(x) x.begin(),x.end()
#define r cin
#define p cout
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        unordered_map<int,int>mp;
        rep(i,0,nums.size()){
            if(mp.find(target-nums[i])!=mp.end()){
                ans.pb(mp[target-nums[i]]);
                // cout<<mp[target-nums[i]];
                ans.pb(i);
            }
            mp[nums[i]]=i;
        }
        return ans;
    }
};

#include<bits/stdc++.h>
using namespace std;
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
ll gcd(ll a,ll b){ if(b==0)return 0; return gcd(b,a%b);}
#define all1(x) x.begin(),x.end()
 
bool isPossible( vector<int>a, int n, int cows, int minDist) {
      int cntCows = 1;
      int lastPlacedCow = a[0];
      for (int i = 1; i < n; i++) {
        if (a[i] - lastPlacedCow >= minDist) {
          cntCows++;
          lastPlacedCow = a[i];
        }
      }
      if (cntCows >= cows) return true;
      return false;
    }
int main() {
    ll t;
    cin>>t;
    
    while(t--){
        int n,c;
	cin>>n>>c;
	 vector<int>a(n);
	rep(i,0,n)  cin>>a[i];
 
  sort(a.begin(),a.end());
  int low = 1, high = a[n - 1] - a[0];
 
      while (low <= high) {
        int mid = (low + high) >> 1;
 
        if (isPossible(a, n, c, mid)) {
          low = mid + 1;
        } else {
          high = mid - 1;
        }
      }
      cout<<high<<"\n";
    }
  
  return 0;
} 

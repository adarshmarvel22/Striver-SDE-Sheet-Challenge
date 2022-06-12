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
class Solution {
public:
    int trap(vector<int>& a) {
   int n = a.size();
  int left = 0, right = n - 1;
  int res = 0;
  int maxLeft = 0, maxRight = 0;
  while (left <= right) {
    if (a[left] <= a[right]) {
      if (a[left] >= maxLeft) {
        maxLeft = a[left];
      } else {
        res += maxLeft - a[left];
      }
      left++;
    } else {
      if (a[right] >= maxRight) {
        maxRight = a[right];
      } else {
        res += maxRight - a[right];
      }
      right--;
    }
  }
  return res;
    }
};

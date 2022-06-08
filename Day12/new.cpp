/*

闩丂闩ᗪ    

█▀▀ █▀█ █▀▄▀█ █▀█ █ █░░ █ █▄░█ █▀▀    ▀█▀ █▀▀ █▀█ █▀█ █▀█ █▀█
█▄▄ █▄█ █░▀░█ █▀▀ █ █▄▄ █ █░▀█ █▄█    ░█░ ██▄ █▀▄ █▀▄ █▄█ █▀▄

*/

#include <bits/stdc++.h>

using namespace std;


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
#define int            long long int

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
#define q_mx        priority_queue <int>
#define q_mn        priority_queue <int, vi, greater<int>>
#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)
#define print(a)       for(auto x : a) cout << x << " "; cout << endl
#define print1(a)      for(auto x : a) cout << x.F << " " << x.S << endl
#define print2(a,x,y)  for(int i = x; i < y; i++) cout<< a[i]<< " "; cout << endl


const int mod=1e9+7;

template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
	const char* comma = strchr (names + 1, ',');
	cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}

inline int power(int a, int b)
{
	int x = 1;
	while (b)
	{
		if (b & 1) x *= a;
		a *= a;
		b >>= 1;
	}
	return x;
}

const int N = 200005;

void solve() {
int x;
        cin >> x;
        int y = x & (-x);
        bug(y,-x);
        if (x == 1) {
            cout << "3\n";
        }
        else {
            if (x == y) {
                cout << y + 1 << "\n";
            }
            else {
                cout << y << "\n";
            }
        }


}

int32_t main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt",  "r",  stdin);
	freopen("output.txt", "w", stdout);
#endif

	clock_t z = clock();

	int t = 1;
	cin >> t;
	while (t--) solve();

	// cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

	return 0;
}
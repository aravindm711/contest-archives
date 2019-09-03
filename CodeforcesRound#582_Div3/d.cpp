# include <bits/stdc++.h>

using namespace std;

# define printvector(v,n)       for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<ln;
# define forn(i,e)              for(int i = 0; i < e; i++)
# define forsn(i,s,e)           for(int i = s; i < e; i++)
# define rforn(i,s)             for(int i = s; i > 0; i--)
# define rforsn(i,s,e)          for(int i = s; i > e; i--)
# define looptc					int t; cin >> t; while(t--)
# define ln                     "\n"

int n, k, a[1000005], cnt, minv=2e9, CNT[1000005], ans[1000005];

void recurse(int x, int cnt=0) {
	CNT[x]++;
	ans[x]+=cnt;
	if (CNT[x]==k) minv=min(minv, ans[x]);
	cout << x << " " << CNT[x] << " " << ans[x] << ln;
	if (!x) return;
	recurse(x/2, cnt+1);
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	cin >> n >> k;
	forn(i, n)
		cin >> a[i];

	sort(a, a+n);
	forn(i, n) recurse(a[i]);
	// cout << minv;
	// cout << ln;
	// for(int i=0;i<6; i++) cout << CNT[i] << " ";
	// cout << ln;
	// for(int i=0;i<6; i++) cout << ans[i] << " ";
	// cout << ln;

	cout << endl;
	return 0;
}


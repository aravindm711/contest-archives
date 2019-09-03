# include <bits/stdc++.h>

using namespace std;

# define printvector(v,n)       for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<ln;
# define forn(i,e)              for(int i = 0; i < e; i++)
# define forsn(i,s,e)           for(int i = s; i < e; i++)
# define rforn(i,s)             for(int i = s; i > 0; i--)
# define rforsn(i,s,e)          for(int i = s; i > e; i--)
# define looptc					int t; cin >> t; while(t--)
# define ln                     "\n"

int n, a[150005], ans, m;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	looptc {
		cin >> n;
		forn(i, n) {
			cin >> a[i];
		}
		if (n==1)
			cout << 0 << ln;
		else {
			// memset(checked, 0, 150005);
			// ans=0;
			// forsn(i, 1, n) {
			// 	forn(j, i) {
			// 		if (!checked[j] && a[j] > a[i]) {
			// 			checked[j] = 1;
			// 			ans++;
			// 		}
			// 	}
			// }
			reverse(a, a+n);
			ans=0;
			m=a[0];
			forn(i, n) {
				if (a[i] > m) ans++;
				else m = a[i];
			}
			cout << ans << ln;
		}
	}	

	cout << endl;
	return 0;
}


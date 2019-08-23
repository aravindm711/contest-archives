# include <bits/stdc++.h>

using namespace std;

# define printvector(v,n)       for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<ln;
# define forn(i,e)              for(int i = 0; i < e; i++)
# define forsn(i,s,e)           for(int i = s; i < e; i++)
# define rforn(i,s)             for(int i = s; i > 0; i--)
# define rforsn(i,s,e)          for(int i = s; i > e; i--)
# define looptc					int t; cin >> t; while(t--)
# define ln                     "\n"

int n, x, arr[205];

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	looptc {
		cin >> n;
		forn(i, n) cin >> arr[i];

		x=1;
		for(int i=1; i<n; i++) {
			if (!(abs(arr[i]-arr[i-1])==1 || abs(arr[i]-arr[i-1])==n-1)) {
				x=0;
				cout << "NO" << ln;
				break;
			}
		}
		if (x)
			cout << "YES" << ln;
	}	

	cout << endl;
	return 0;
}


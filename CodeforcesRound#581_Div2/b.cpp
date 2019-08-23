# include <bits/stdc++.h>

using namespace std;

# define printvector(v,n)       for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<ln;
# define forn(i,e)              for(int i = 0; i < e; i++)
# define forsn(i,s,e)           for(int i = s; i < e; i++)
# define rforn(i,s)             for(int i = s; i > 0; i--)
# define rforsn(i,s,e)          for(int i = s; i > e; i--)
# define looptc					int t; cin >> t; while(t--)
# define ln                     "\n"

int n, l, r, minans, maxans=1, prod=1;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	cin >> n >> l >> r;

	// minans += (n-l+1);
	// for(int i=0; i<l-1; i++) {
	// 	minans += prod*2;
	// 	prod*=2;
	// }

	// prod=1;
	// for(int i=1; i<r; i++) {
	// 	maxans += prod*2;
	// 	prod*=2;
	// }
	// cout << minans << " " << (maxans+(prod*(n-r))) << ln;
	// cout << (1<<l) << ln;

	cout << ((1<<l)-1 + n-l) << " " << ((1<<r)-1 + (n-r)*(1<<(r-1)));

	cout << endl;
	return 0;
}


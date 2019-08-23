# include <bits/stdc++.h>

using namespace std;

# define printvector(v,n)       for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<ln;
# define forn(i,e)              for(int i = 0; i < e; i++)
# define forsn(i,s,e)           for(int i = s; i < e; i++)
# define rforn(i,s)             for(int i = s; i > 0; i--)
# define rforsn(i,s,e)          for(int i = s; i > e; i--)
# define looptc					int t; cin >> t; while(t--)
# define ln                     "\n"

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	looptc {
		long long k, n, a, b;
		cin >> k >> n >> a >> b;

		long long c=k-n*a;
		if (c > 0) {
			cout << n << ln;
		} else {
			long long temp=ceil(-c/(a-b))+1;
			cout << (temp>n ? -1 : n-temp) << ln;
		}
	}

	cout << endl;
	return 0;
}


# include <bits/stdc++.h>

using namespace std;

# define printvector(v,n)       for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<ln;
# define forn(i,e)              for(int i = 0; i < e; i++)
# define forsn(i,s,e)           for(int i = s; i < e; i++)
# define rforn(i,s)             for(int i = s; i > 0; i--)
# define rforsn(i,s,e)          for(int i = s; i > e; i--)
# define looptc					int t; cin >> t; while(t--)
# define ln                     "\n"

long long n, x, g, cnt;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	cin >> n >> g;
	forn(i, n-1)
		cin >> x, g=__gcd(g, x);

	for(long long i=1; i<=sqrt(g); i++)
		if(g%i==0) {
			if (g/i==i) cnt++;
			else cnt+=2;
		}
	cout << cnt;

	cout << endl;
	return 0;
}


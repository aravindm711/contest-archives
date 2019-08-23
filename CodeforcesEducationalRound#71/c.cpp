# include <bits/stdc++.h>

using namespace std;

# define printvector(v,n)       for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<ln;
# define forn(i,e)              for(int i = 0; i < e; i++)
# define forsn(i,s,e)           for(int i = s; i < e; i++)
# define rforn(i,s)             for(int i = s; i > 0; i--)
# define rforsn(i,s,e)          for(int i = s; i > e; i--)
# define looptc					int t; cin >> t; while(t--)
# define ln                     "\n"

# define inf 9e18

long long n, a, b, ans, x;
string inp;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	looptc {
		cin >> n >> a >> b >> inp;
		ans=x=0;
		ans+=(n+1)*b+n*a;
		forn(i, n) {
			if (inp[i]=='1') {
				ans+=2*b;
				if(x) ans+=min(2*a, (i-x-2)*b);
				x=i;
			}
		}
		cout << (ans+(x? a*2: 0)) << ln;
	}	

	cout << endl;
	return 0;
}


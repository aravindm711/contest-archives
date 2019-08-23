# include <bits/stdc++.h>

using namespace std;

# define printvector(v,n)       for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<ln;
# define forn(i,e)              for(int i = 0; i < e; i++)
# define forsn(i,s,e)           for(int i = s; i < e; i++)
# define rforn(i,s)             for(int i = s; i > 0; i--)
# define rforsn(i,s,e)          for(int i = s; i > e; i--)
# define looptc					int t; cin >> t; while(t--)
# define ln                     "\n"

int b, p, f, h, c, ans;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	looptc {
		cin >> b >> p >> f >> h >> c;
		b/=2;
		ans=0;
		if (h>=c) {
			ans+=min(p, b)*h;
			b=max(0, b-p);
			ans+=min(b, f)*c;
		} else {
			ans+=min(b, f)*c;
			b=max(0, b-f);
			ans+=min(b, p)*h;
		}
		cout << ans << ln;
	}	

	cout << endl;
	return 0;
}


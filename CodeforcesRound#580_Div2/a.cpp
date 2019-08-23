# include <bits/stdc++.h>

using namespace std;

# define printvector(v,n)       for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<ln;
# define forn(i,e)              for(int i = 0; i < e; i++)
# define forsn(i,s,e)           for(int i = s; i < e; i++)
# define rforn(i,s)             for(int i = s; i > 0; i--)
# define rforsn(i,s,e)          for(int i = s; i > e; i--)
# define looptc					int t; cin >> t; while(t--)
# define ln                     "\n"

int n, m;
int arra[105], arrb[105];

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	cin >> n;
	forn(i, n) cin >> arra[i];
	cin >> m;
	forn(i, m) cin >> arrb[i];
	sort(arra, arra+n);
	sort(arrb, arrb+m);

	cout << arra[n-1] << " " << arrb[m-1] << ln;

	cout << endl;
	return 0;
}


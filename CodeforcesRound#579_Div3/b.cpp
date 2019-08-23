# include <bits/stdc++.h>

using namespace std;

# define printvector(v,n)       for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<ln;
# define forn(i,e)              for(int i = 0; i < e; i++)
# define forsn(i,s,e)           for(int i = s; i < e; i++)
# define rforn(i,s)             for(int i = s; i > 0; i--)
# define rforsn(i,s,e)          for(int i = s; i > e; i--)
# define looptc					int t; cin >> t; while(t--)
# define ln                     "\n"

int n, x, arr[405], flag;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	looptc {
		x=0;
		cin >> n;
		forn(i, 4*n) cin >> arr[i], x^=arr[i];

		if (x!=0)
			cout << "NO" << ln;
		else {
			sort(arr, arr+4*n);
			flag=1;
			x=arr[0]*arr[4*n-1];
			for(int i=1, j=4*n-2; i<2*n; i++, j--) {
				if (x!=arr[i]*arr[j]) {
					cout << "NO" << ln;
					flag=0;
					break;
				}
			}
			if(flag)
				cout << "YES" << ln;
		}
	}

	cout << endl;
	return 0;
}


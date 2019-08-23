# include <bits/stdc++.h>

using namespace std;

# define printvector(v,n)       for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<ln;
# define forn(i,e)              for(int i = 0; i < e; i++)
# define forsn(i,s,e)           for(int i = s; i < e; i++)
# define rforn(i,s)             for(int i = s; i > 0; i--)
# define rforsn(i,s,e)          for(int i = s; i > e; i--)
# define looptc					int t; cin >> t; while(t--)
# define ln                     "\n"

int n, arr[105], maxval, x;

int sumofdigits(int t) {
	int res=0;
	while(t) {
		res+=t%10;
		t/=10;
	}

	return res;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	looptc {
		cin >> n;
		forn(i, n) cin >> arr[i];

		maxval = 0;
		for(int i=0; i<n; i++) {
			for(int j=i+1; j<n; j++) {
				x = sumofdigits(arr[i]*arr[j]);
				maxval = max(x, maxval);
			}
		}
		cout << maxval << ln;
	}	

	cout << endl;
	return 0;
}


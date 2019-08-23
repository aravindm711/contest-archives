# include <bits/stdc++.h>

using namespace std;

# define printvector(v,n)       for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<ln;
# define forn(i,e)              for(int i = 0; i < e; i++)
# define forsn(i,s,e)           for(int i = s; i < e; i++)
# define rforn(i,s)             for(int i = s; i > 0; i--)
# define rforsn(i,s,e)          for(int i = s; i > e; i--)
# define looptc					int t; cin >> t; while(t--)
# define ln                     "\n"

int n, q, x, maxval, arr[100005], xors[100005];

int countbits(int a) {
	int cnt=0;
	while(a){
		a &= (a-1);
		cnt++;
	}

	return (cnt%2==0 ? cnt: 0);
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	looptc {
		cin >> n >> q;
		forn(i, n) cin >> arr[i], xx += (arr[i]==0?1:0);
		xors[0]=arr[0];
		for(int j=1; j<n; j++) xors[j] = xors[j-1]^arr[j];
		forn(i, q) {
			cin >> x >> arr[x];
			forsn(j, x, n) xors[j] = (j > 0 ? xors[j-1]^arr[j] : arr[0]);
			for(int j=1; j<n; j++) {
				for(int k=0; k<j; k++) {
					x = countbits(xors[j]^xors[k]);
					maxval = (maxval > x ? maxval : x);
				}
			}
			// cout << maxval << ln;
		}
	}	

	cout << endl;
	return 0;
}


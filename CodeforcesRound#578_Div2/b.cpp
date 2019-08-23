# include <bits/stdc++.h>

using namespace std;

# define printvector(v,n)       for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<ln;
# define forn(i,e)              for(int i = 0; i < e; i++)
# define forsn(i,s,e)           for(int i = s; i < e; i++)
# define rforn(i,s)             for(int i = s; i > 0; i--)
# define rforsn(i,s,e)          for(int i = s; i > e; i--)
# define looptc					int t; cin >> t; while(t--)
# define ln                     "\n"

int n, m, k, flag;
int arr[105];

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	looptc {
		cin >> n >> m >> k, flag=1;
		forn(i, n) cin >> arr[i];

		if(n==1) {
			cout << "YES" << ln;
			continue;
		}
		else {
			for(int i=1; i<n; i++) {
				if(arr[i-1]+m >= arr[i]-k)
					m+=min(arr[i-1]-arr[i]+k, arr[i-1]);
				else {
					flag=0;
					break;
				}
			}
		}
		if (flag) cout << "YES" << ln;
		else cout << "NO" << ln;
	}

	cout << endl;
	return 0;
}


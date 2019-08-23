# include <bits/stdc++.h>

using namespace std;

# define printvector(v,n)       for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<ln;
# define forn(i,e)              for(int i = 0; i < e; i++)
# define forsn(i,s,e)           for(int i = s; i < e; i++)
# define rforn(i,s)             for(int i = s; i > 0; i--)
# define rforsn(i,s,e)          for(int i = s; i > e; i--)
# define looptc					int t; cin >> t; while(t--)
# define ln                     "\n"

int a[51][51], b[51][51], n, m, cnt, ans, flag;
int x[4]={0, 0, 1, 1};
int y[4]={0, 1, 0, 1};
vector<int> vans;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	cin >> n >> m;
	forn(i, n)
		forn(j, m) {
			cin >> a[i][j];
			if (a[i][j]) cnt++;
		}

	if (!cnt)
		cout << 0;
	else {
		for(int i=0; i<n-1; i++) {
			for(int j=0; j<m-1; j++) {
				cnt=0;
				for(int k=0; k<4; k++)
					if (a[i+x[k]][j+y[k]])
						cnt++;
				if (cnt==4) vans.push_back(i), vans.push_back(j);
			}
		}

		for(int i=0; i<vans.size(); i+=2) {
			forn(k, 4) {
				b[vans[i]+x[k]][vans[i+1]+y[k]]=1;
			}
		}

		forn(i, n)
			forn(j, m)
				if (a[i][j] != b[i][j]) {
					flag=1;
					break;
				}

		if (flag)
			cout << -1;
		else {
			cout << vans.size()/2 << ln;
			for(int i=0; i<vans.size(); i+=2)
				cout << vans[i]+1 << " " << vans[i+1]+1 << ln;
		}
	}

	cout << endl;
	return 0;
}


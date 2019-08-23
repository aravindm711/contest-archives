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
		int n;
		cin >> n;

		vector<long long> v;
		int temp, even=0;
		double sum=0;
		forn(i, 2*n) {
			cin >> temp, v.push_back(temp);
			sum += temp;

			if(temp%2 == 0) {
				if (i < n)
					even++;
				else
					even--;
			}
		}

		sum /= 2;
		sum -= abs((double)even)/2;

		cout << (long long)sum << ln;
	}

	cout << endl;
	return 0;
}


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

		int temp;
		map<int, int> count;
		forn(i, n) cin >> temp, count[temp]++;

		vector<int> v;
		for(auto i: count) v.push_back(i.second);
		sort(v.rbegin(), v.rend());

		int sum=v[0], last=v[0];
		for(int i=1; i<v.size(); i++) {
			if (last==0) break;
			if (v[i] >= last) {
				sum += last-1;
				last -= 1;
			} else {
				sum += v[i];
				last = v[i];
			}	
		}
		cout << sum << ln;
	}

	cout << endl;
	return 0;
}


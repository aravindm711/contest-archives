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
		long long n, k, temp;
		cin >> n >> k;

		vector<long long> num_list;
		long long max=0, min=2e8;
		while(n--) {
			cin >> temp, num_list.push_back(temp);
			if (temp > max) max = temp;
			if (temp < min) min = temp;
		}
		
		if (k+min >= max-k)
			cout << (k + min) << ln;
		else
			cout << -1 << ln;
	}

	cout << endl;
	return 0;
}

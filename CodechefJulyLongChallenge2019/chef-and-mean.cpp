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
		long long n;
		cin >> n;

		vector<long long> numlist;
		long long sum=0, temp;
		forn(i, n) {
			cin >> temp, numlist.push_back(temp);
			sum += temp;
		}

		if ((sum*(n-1))%n != 0) {
			cout << "Impossible" << ln;
			continue;
		}

		long long newsum = (sum*(n-1)/n);
		temp = sum - newsum;

		auto it = find(numlist.begin(), numlist.end(), temp);
		if (it != numlist.end()) 
			cout << (distance(numlist.begin(), it)+1) << ln;
		else
			cout << "Impossible" << ln;
	}

	cout << endl;
	return 0;
}


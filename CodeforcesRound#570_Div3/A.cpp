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

	int n;
	cin >> n;

	int temp=n;
	for(int i=1;;i++) {
		int sum=0;
		// cout << temp << ln;
		while(temp) {
			sum += temp%10;
			temp /= 10;
		}

		// cout << sum << ln;
		if(sum % 4 == 0) {
			cout << (n+i-1);
			return 0;
		} temp = n+i;
	}

	cout << endl;
	return 0;
}


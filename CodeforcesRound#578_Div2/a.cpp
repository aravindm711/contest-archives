# include <bits/stdc++.h>

using namespace std;

# define printvector(v,n)       for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<ln;
# define forn(i,e)              for(int i = 0; i < e; i++)
# define forsn(i,s,e)           for(int i = s; i < e; i++)
# define rforn(i,s)             for(int i = s; i > 0; i--)
# define rforsn(i,s,e)          for(int i = s; i > e; i--)
# define looptc					int t; cin >> t; while(t--)
# define ln                     "\n"

string x="0000000000", inp;
int n, l, r;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	cin >> n;
	cin >> inp;
	forn(i, n) {
		if (inp[i] == 'L') x[l]='1';
		else if (inp[i] == 'R') x[9-r]='1';
		else x[(int)inp[i]-48]='0';
		forn(j, 10) if (x[j]=='0') { l=j; break; }
		forn(j, 10) if (x[9-j]=='0') { r=j; break; }
	} cout << x;

	cout << endl;
	return 0;
}


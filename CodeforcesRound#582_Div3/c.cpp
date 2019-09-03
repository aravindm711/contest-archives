# include <bits/stdc++.h>

using namespace std;

# define printvector(v,n)       for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<ln;
# define forn(i,e)              for(int i = 0; i < e; i++)
# define forsn(i,s,e)           for(int i = s; i < e; i++)
# define rforn(i,s)             for(int i = s; i > 0; i--)
# define rforsn(i,s,e)          for(int i = s; i > e; i--)
# define looptc					int t; cin >> t; while(t--)
# define ln                     "\n"

long long n, m, x, p, cnt, nums[20];

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	looptc {
		cin >> n >> m;
		if (m>n) {
			cout << 0 << ln;
			continue;
		}
		if (m==n) {
			cout << n%10 << ln;
			continue;
		}
		x=m%10;
		p=nums[0]=0;
		forsn(i, 1, 20) {
			p+=x;
			nums[i]=p%10;
			if (nums[i]==0) {
				cnt=i;
				break;
			}
		}
		p=0;
		forn(i, cnt) p+=nums[i+1];
		p*=(n/m/cnt);
		forn(i, n/m%cnt) p+=nums[i+1];
		cout << p << ln;
	}	

	cout << endl;
	return 0;
}


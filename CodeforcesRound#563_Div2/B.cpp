# include <bits/stdc++.h>

using namespace std;

# define printvector(v,n)       for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<ln;
# define forn(i,e)              for(int i = 0; i < e; i++)
# define forsn(i,s,e)           for(int i = s; i < e; i++)
# define rforn(i,s)             for(int i = s; i > 0; i--)
# define rforsn(i,s,e)          for(int i = s; i > e; i--)
# define looptc					int t; cin >> t; while(t--)
# define ln                     "\n"

bool count1[2];
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int n;
	cin >> n;

	int temp;
	vector<long long> numbers;
	forn(i, n){
		cin >> temp, numbers.push_back(temp);
		count1[temp%2] = 1;
	}

	if (count1[0] && count1[1])
		sort(numbers.begin(), numbers.end());
	printvector(numbers, n);

	cout << endl;
	return 0;
}


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

	int temp, first_half=0, second_half=0;
	vector<int> numbers;
	forn(i, 2*n) {
		cin >> temp, numbers.push_back(temp);

		if (i < n) first_half += temp;
		else second_half += temp;
	}
	if (first_half != second_half) {
		printvector(numbers, 2*n)
		return 0;
	}

	int one, two;
	forn(i, n) {
		int j;
		for(j=n; j<2*n; j++) {
			one = first_half - numbers[i] + numbers[j];
			two = second_half - numbers[j] + numbers[i];

			if (one != two) {
				temp = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = temp;
				printvector(numbers, 2*n)
				return 0;
			}
		}
	} cout << -1;

	cout << endl;
	return 0;
}


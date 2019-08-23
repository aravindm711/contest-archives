# include <iostream>
# include <vector>
# include <algorithm>
# include <cmath>

using namespace std;

# define ll long long
# define loopup(x, a, b) for(int x = a; x < b; x++)
# define loopdown(x, a, b) for (int x = b - 1; x >= a; x--)

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	ll N;
	ll P;
	ll max_rem;
	ll total_count;
	ll t;
	cin >> t;
	while(t--) {
		cin >> N >> P;

		if (N <= 2) {
			cout << P * P * P << endl;
			continue;
		}

		total_count = 0;
		max_rem = floor((N - 1) / 2);
		total_count += (P - max_rem) * (P - max_rem);
		total_count += (P - N) * (P - max_rem);
		total_count += (P - N) * (P - N);

		cout << total_count << '\n';
	}

	return 0;
}
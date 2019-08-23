# include <string>
# include <vector>
# include <algorithm>
# include <numeric>
# include <set>
# include <map>
# include <queue>
# include <iostream>
# include <iomanip>
# include <sstream>
# include <cstdio>
# include <cmath>
# include <ctime>
# include <cstring>
# include <cctype>
# include <cassert>
# include <climits>
# include <utility>
# include <functional>

using namespace std;

# define looptc 	int t; cin >> t; while(t--)

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

    int d;
	long long n;
	long long x;
	looptc {
		cin >> n >> d;

		int i = 1;
		vector<int> v;
		while (true) {
		    x = n % 10;
			n = n / 10;

			if (x < d) {
				v.pb(x);
			}
			
			if (n == 0) break;

			i++;
		}
		n = 0;
		for (int j = v.size() - 1; j >= 0; j--) {
		    n += v[j] * (pow(10, i - 1));
		    i--;
		}
		for (; i > 1; i--) {
		    n = n + (d * (pow(10, i - 1)));
		}
		if (i == 1) n += d;
		cout << n << ln;
	}

	return 0;
}


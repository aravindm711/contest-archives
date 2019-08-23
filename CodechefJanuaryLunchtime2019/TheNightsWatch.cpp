# include <iostream>
# include <vector>
# include <string>
# include <cmath>
# include <algorithm>

using namespace std;

# define loopup(x, a, b) for(int x = a; x < b; x++)
# define loopdown(x, a, b) for (int x = b - 1; x >= a; x--)

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int N;
	int count;
	string input_str;
	int t;
	cin >> t;
	while(t--) {
		cin >> N;

		count = 0;
		cin >> input_str;
		loopup(i, 0, N)
			if (input_str[i] == '0')
				count++;

		if (count < N) {
			count = 0;
			if (input_str[0] == '0' && input_str[1] == '0') {
				count++;
				input_str[0] = '1';
			}
			loopup(i, 1, N - 1) {
				if (input_str[i] == '0' && input_str[i - 1] == '0' && input_str[i + 1] == '0') {
					count++;
					input_str[i] = '1';
				}
			}
			if (input_str[N - 1] == '0' && input_str[N - 2] == '0') count++;

			cout << count << endl;
		} else cout << ceil((float)N / 2) << endl;
	}

	return 0;
}
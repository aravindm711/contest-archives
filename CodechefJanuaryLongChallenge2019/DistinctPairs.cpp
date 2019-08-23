# include <iostream>
# include <vector>
# include <algorithm>

using namespace std;

# define loopup(x, a, b) for(int x = a; x < b; x++)
# define loopdown(x, a, b) for (int x = b - 1; x >= a; x--)

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int N, M;
	cin >> N >> M;

	if (N >= M) {
		int input_val;
		int max_val;
		cin >> max_val;

		int max_index = 0;
		loopup(i, 1, N) {
			cin >> input_val;

			if (input_val > max_val) {
				max_val = input_val;
				max_index = i;
			}
		}

		int min_val;
		cin >> min_val;

		int min_index = 0;
		loopup(i, 1, M) {
			cin >> input_val;

			if (input_val < min_val) {
				min_val = input_val;
				min_index = i;
			}
		}

		loopup(i, 0, N) {
			cout << i << " " << min_index << '\n';
			if (i < M && i != min_index)
				cout << max_index << " " << i << '\n';
		}
	} else {
		int input_val;
		int min_val;
		cin >> min_val;

		int min_index = 0;
		loopup(i, 1, N) {
			cin >> input_val;

			if (input_val < min_val) {
				min_val = input_val;
				min_index = i;
			}
		}

		int max_val;
		cin >> max_val;

		int max_index = 0;
		loopup(i, 1, M) {
			cin >> input_val;

			if (input_val > max_val) {
				max_val = input_val;
				max_index = i;
			}
		}

		loopup(i, 0, M) {
			cout << min_index << " " << i << '\n';
			if (i < N && i != min_index)
				cout << i << " " << max_index << '\n';
		}
	}

	return 0;
}

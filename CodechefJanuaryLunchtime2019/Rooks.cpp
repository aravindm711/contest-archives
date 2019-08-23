# include <iostream>
# include <vector>
# include <string>
# include <cmath>
# include <algorithm>

using namespace std;

# define loopup(x, a, b) for(int x = a; x < b; x++)
# define loopdown(x, a, b) for (int x = b - 1; x >= a; x--)

typedef vector<int> v32;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n;
	int k;
	int val1;
	int val2;
	v32 row_list;
	v32 col_list;
	int t;
	cin >> t;
	while(t--) {
		cin >> n >> k;

		/*
		int* row_list = new int[n];
		int* col_list = new int[n];
		loopup(i, 0, n) {
			row_list[i] = i + 1;
			col_list[i] = i + 1;
		}
		loopup(i, 0, k) {
			cin >> val1 >> val2;

			row_list[val1 - 1] = -1;
			col_list[val2 - 1] = -1;
		}

		int a = 0;
		int b = n - k;
		int* final_list = new int[2 * (n - k)];
		loopup(i, 0, n) {
			if (row_list[i] != -1) {
				final_list[a] = i + 1;
				a++;
			}
			if (col_list[i] != -1) {
				final_list[b] = i + 1;
				b++;
			}
		}

		cout << n;
		loopup(i, 0, a)
			cout << " " << final_list[i] << " " << final_list[a + i];
		cout << endl;
		*/

		loopup(i, 0, n) {
			row_list.push_back(i + 1);
			col_list.push_back(i + 1);
		}
		loopup(i, 0, k) {
			cin >> val1 >> val2;

			row_list[val1 - 1] = -1;
			col_list[val2 - 1] = -1;
		}
		remove(row_list.begin(), row_list.end(), -1);
		remove(col_list.begin(), col_list.end(), -1);

		n -= k;
		cout << n;
		loopup(i, 0, n)
			cout << " " << row_list[i] << " " << col_list[i];
		cout << endl;

		row_list.clear();
		col_list.clear();

		//delete [] row_list;
		//delete [] col_list;
		//delete [] final_list;
	}

	return 0;
}

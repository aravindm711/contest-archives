#include<iostream>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	
	while (t) {
		cin >> n;

		int** arr = new int*[n];
		for (int i = 0; i < n; i++) {
			arr[i] = new int[n];
		}

		int r = 0, c = 0;
		int temp_r, temp_c;
		int x = 1;
		while (c < n) {
			temp_c = c;
			temp_r = r;

			while (temp_c + 1) {
				arr[temp_r][temp_c] = x;
				++x;
				--temp_c;
				++temp_r;
			}
			++c;
		}

		r = 1;
		while (r < n) {
			temp_c = n - 1;
			temp_r = r;

			while (n - temp_r) {
				arr[temp_r][temp_c] = x;
				++x;
				++temp_r;
				--temp_c;
			}
			++r;
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++)
				cout << arr[i][j] << " ";
			cout << endl;
		}

		--t;
	}
	
	return 0;
}
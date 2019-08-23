#include<iostream>
using namespace std;

int calcAge(int arr[], int y, int n) {
	if (y % 4 == 0)
		arr[n - 1] += 1;

	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}

	return sum;
}

int main() {
	int t;
	cin >> t;

	int n;
	int yc, yb, mc, mb, db, dc;
	int sum = 0;
	int temp, temp1;
	while (t) {
		cin >> n;
		int* arr = new int[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		cin >> yb >> mb >> db;
		cin >> yc >> mc >> dc;

			if (yc != yb) {	
				if (yc - yb > 1) {
					temp1 = yb + 1;
					for (int i = temp1; i < yc; i++) {
						sum += calcAge(arr, temp1, n);
						temp1++;
					}
				}
				if (yb % 4 == 0)
					sum += 1;
				sum += arr[mb - 1] - dc + 1;
				for (int i = mb; i < n; i++)
					sum += arr[i];

				for (int i = 0; i < mc - 1; i++)
					sum += arr[i];
				sum += dc;
				cout << sum;
			} else {
				if (yb % 4 == 0)
					arr[n - 1] += 1;
				for (int i = mb; i < mc; i++) {
					sum += arr[i];
				}
			}

		--t;
	}

	return 0;
}
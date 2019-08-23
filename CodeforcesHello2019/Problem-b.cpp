#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int n;
	cin >> n;

	int* ith_rotation = new int[n];
	for (int i = 0; i < n; i++)
		cin >> ith_rotation[i];

	int temp = 1;
	int* two_powern_list = new int[n];
	for (int i = 0; i < n; i++) {
		two_powern_list[i] = temp;

		temp *= 2;
	}

	int x = two_powern_list[n - 1] * 2;
	int sum = 0;
	for (int i = 0; i < x; i++) {
		if (i % 2 == 0)
			sum += ith_rotation[0];
		else
			sum += ith_rotation[0] * -1;

		for (int j = 1; j < n; j++) {
			if ((i / two_powern_list[j]) % 2 == 0)
				sum += ith_rotation[j];
			else
				sum += ith_rotation[j] * -1;
		}

		if (sum % 360 == 0) {
			cout << "YES" << endl;
			break;
		}

		if (i == x - 1)
			cout << "NO" << endl;

		sum = 0;
	}

	delete [] two_powern_list;

	delete [] ith_rotation;

	return 0;
}

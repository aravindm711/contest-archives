#include<iostream>
#include<vector>
using namespace std;

int main() {
	int t;
	cin >> t;

	int N;
	int a, b;
	int input_val;
	vector<int> list_mul_b;
	for (int s = 0; s < t; s++) {
		cin >> N >> a >> b;

		for (int i = 0; i < N; i++) {
			cin >> input_val;

			if (input_val % b == 0)
				list_mul_b.push_back(input_val);
			else
				continue;
		}

		if (list_mul_b.size() == 0)
			cout << "BOB" << endl;
		else
			cout << "ALICE" << endl;
	}

	return 0;
}

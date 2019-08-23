#include<iostream>
#include<vector>
using namespace std;

int main() {
	int t;
	cin >> t;

	int N;
	int a;
	int b;
	int input_val;
	int BB, AL, both;
	while (t--) {
		cin >> N >> a >> b;

		BB = 0;
		AL = 0;
		both = 0;
		for (int i = 0; i < N; i++) {
			cin >> input_val;

			if (input_val % a == 0 && input_val % b == 0) both++;
			else if (input_val % a == 0) BB++;
			else if (input_val % b == 0) AL++;
			else continue;
		}

		cout << (BB > AL - (both > 0) ? "BOB\n" : "ALICE\n");
	}

	return 0;
}

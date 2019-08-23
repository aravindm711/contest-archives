#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
	int t;
	cin >> t;

	vector<string> input_string;
	for (int x = 0; x < t; x++) {
		while (true)
			input_string.push_back();

		for (int i = 0; i <= input_string.size(); i++)
			cout << input_string[i] << " ";

		input_string.clear();
	}

	return 0;
}
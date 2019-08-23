# include <iostream>
# include <cmath>
# include <string>
# include <utility>
# include <algorithm>
# include <vector>

using namespace std;

# define loopup(x, a, b) for(int x = a; x < b; x++)
# define loopdown(x, a, b) for(int x = a - 1; x >= b; x--)

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	
	int n;
	int k;
	cin >> n;
	cin >> k;
	
	int* aith_values = new int[n];
	string sequence_char;
	vector< pair< int, char> > input_values;
	loopup(i, 0, n)
		cin >> aith_values[i];
	cin >> sequence_char;
		
	loopup(i, 0, n)
		input_values.push_back(pair<int, char> (aith_values[i], sequence_char[i]));
		
	sort(input_values.begin(), input_values.end());
	
	int* alphabet_count = new int[26];
	loopup(i, 0, 26)
		alphabet_count[i] = 1;
	int sum = 0;
	loopdown(i, n, 0) {
		if (alphabet_count[((int)input_values[i].second) - 97] <= k) {
			sum += input_values[i].first;
			alphabet_count[((int)input_values[i].second) - 97]++;
		} else continue;
	}
	
	cout << sum << endl;
		
	delete [] aith_values;
	delete [] alphabet_count;
	return 0;
}

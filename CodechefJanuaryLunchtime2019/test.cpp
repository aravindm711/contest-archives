# include <iostream>
# include <vector>
# include <algorithm>
# include <string>

using namespace std;

# define loopup(x, a, b) for(int x = a; x < b; x++)
# define loopdown(x, a, b) for (int x = b - 1; x >= a; x--)

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	/*
	std::vector<int> v;
	loopup(i, 0, 5)
		v.push_back(i);

	cout << v[4] << endl;

	v.erase(v.begin() + 4);

	cout << v[100] << endl;
	*/

	loopup(i, 0, 2)
		int a = 1;

	cout << a << endl;

	return 0;
}
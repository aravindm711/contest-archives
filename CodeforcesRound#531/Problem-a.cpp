# include <iostream>

# define loopup(x, a, b) for(int x = a; x <= b; x++)
# define loopdown(x, a, b) for (int x = b - 1; x >= a; x--)

int main() {
	int n;
	std::cin >> n;

	int sum = 0;
	loopup(i, 0, n)
		sum += i;

	std::cout << (sum % 2) << std::endl;

	return 0;
}
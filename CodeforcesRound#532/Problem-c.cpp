#include<iostream>
#include<math.h>
using namespace std;

int main() {
	int n, r;
	cin >> n >> r;

	double angle = M_PI/n;
	printf("%0.10f\n", (sin(angle) * r)/(1 - sin(angle)));

	return 0;
}

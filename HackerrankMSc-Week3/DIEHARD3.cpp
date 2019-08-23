#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    while(a&&b)
    {
        if(a>=b)
            a=a%b;
        else
            b=b%a;
    }
    return a+b;
}

int main() {
	int t;
	cin >> t;

	int a, b, c;
	int temp;
	int x;
	while (t) {
		cin >> a >> b >> c;

		if (b > a) {
			temp = a;
			a = b;
			b = temp;
		}

		if (c > a) {
			cout << "NO" << endl;
			--t;
			continue;
		}

		if (c == a || c == b) {
			cout << "YES" << endl;
			--t;
			continue;
		}

		x = gcd(a, b);
		if (c % x == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

		/*
		if ((a - c) % b == 0 || c % (a - b) == 0 || c % b == 0)
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;
		*/

		--t;
	}

	return 0;
}

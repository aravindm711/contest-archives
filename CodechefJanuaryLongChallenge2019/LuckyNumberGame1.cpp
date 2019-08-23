#include<iostream>
#include<vector>
#include<string>
using namespace std;

int gcd(int a, int b) 
{ 
    if (a == 0) 
       return b; 

    if (b == 0) 
       return a; 
   
    if (a == b) 
        return a; 
   
    if (a > b) 
        return gcd(a-b, b);

    return gcd(a, b-a); 
}

int lcm (int a, int b) {
	return (a * b) / gcd(a, b);
}

int main() {
	int t;
	cin >> t;

	int N;
	int a, b;
	int lcm_ab;
	int input_val;
	vector<int> aith_values;
	vector<int> list_mul_a;
	vector<int> list_mul_b;
	for (int s = 0; s < t; s++) {
		cin >> N >> a >> b;

		if (a == b) {
			for (int i = 0; i < N; i++)
				cin >> input_val;

			cout << "BOB" << endl;
		} else {
			lcm_ab = lcm(a, b);

			for (int i = 0; i < N; i++) {
				cin >> input_val;

				if (input_val % lcm_ab != 0)
					aith_values.push_back(input_val);
			}

			for (int i = 0; i < aith_values.size(); i++) {
				if (aith_values[i] % a == 0)
					list_mul_a.push_back(aith_values[i]);
				else if (aith_values[i] % b == 0)
					list_mul_b.push_back(aith_values[i]);
			}

			if (list_mul_b.size() > list_mul_a.size()) {
				cout << "ALICE" << endl;
			} else if (list_mul_b.size() <= list_mul_a.size()) {
				cout << "BOB" << endl;
			}
		}
	}

	return 0;
}

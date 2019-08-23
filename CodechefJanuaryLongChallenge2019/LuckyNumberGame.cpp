#include<iostream>
#include<algorithm>
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
	int a;
	int b;
	int flag;
	int lcm_flag;
	int temp_lcm_flag;
	int check_val;
	int lcm_ab;
	while (t) {
		cin >> N >> a >> b;

		int* aith_values = new int[N];
		for (int i = 0; i < N; i++)
			cin >> aith_values[i];

		flag = 1;
		lcm_flag = 1;
		temp_lcm_flag = 0;
		lcm_ab = lcm(a, b);
		check_val = 0;
		sort(aith_values, aith_values + N);
		while (true) {
			if (flag == 1 && lcm_flag == 1)
				check_val = lcm_ab;
			else if (flag == 1 && lcm_flag == 0)
				check_val = a;
			else if (flag == 0 && lcm_flag  == 1)
				check_val = lcm_ab;
			else if (flag == 0 && lcm_flag == 0)
				check_val = b;

			temp_lcm_flag = 0;
			for (int i = 0; i < N; i++) {
				if (aith_values[i] % check_val == 0) {
					aith_values[i] = -1;
					temp_lcm_flag = 1;
					break;
				}
			}

			if (temp_lcm_flag == 1) {
				lcm_flag = 1;
				if (flag == 1) 
					flag = 0;
				else if (flag == 0)
					flag = 1;
			} else if (temp_lcm_flag == 0 && lcm_flag == 0) {
				if (flag == 0)
					cout << "BOB" << endl;
				else
					cout << "ALICE" << endl;
				break;
			} else if (temp_lcm_flag == 0) {
				lcm_flag = 0;
			}
		}

		delete [] aith_values;

		--t;
	}

	return 0;
}

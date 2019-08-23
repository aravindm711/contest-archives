#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;

	int j;
	int key;
	int* arr = new int[t];
	for (int i = 0; i < t; i++) {
		cin >> arr[i];

		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key) 
       	{ 
           	arr[j+1] = arr[j]; 
           	j = j-1; 
       	} 
       	arr[j+1] = key;
	}

	for (int i = 0; i < t; i++)
		cout << arr[i];

	return 0;
}
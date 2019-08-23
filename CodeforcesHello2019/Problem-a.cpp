#include<iostream>
#include<string>
using namespace std;

int main() {
	string table_card;
	cin >> table_card;

	string hand_cards[5];
	for (int i = 0; i < 5; i++)
		cin >> hand_cards[i];

	int flag = 0;
	for (int i = 0; i < 5; i++) {
		if (hand_cards[i][0] == table_card[0] || hand_cards[i][1] == table_card[1]) {
			cout << "YES" << endl;
			flag = 1;
			break;
		}
	}

	if (flag == 0)
		cout << "NO" << endl;

	return 0;
}
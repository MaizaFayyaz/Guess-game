
#include<iostream>
using namespace std;

int main() {
	int playagain = 0;			//for replay
	do {
		int num = rand();			//generates a random interger
		do {
			int x = 0;
			cout << "Guess the number" << endl;
			cin >> x;
			if (x == num) {
				cout << "YAHOO you guessed it right!" << endl;
				break;
			}
			else if (x < num) {
				cout << "Try Again! " << endl;
				cout << "Hint:The number is larger than your guess" << endl;
			}
			else if (x > num) {
				cout << "Try Again! " << endl;
				cout << "Hint:The number is smaller than your guess" << endl;
			}
		} while (1);
		cout << "DO U WANT TO PLAY THIS GAME AGAIN?\n If yes press 1 else press any other number" << endl;
		cin >> playagain;

	} while (playagain == 1);
}



#include <iostream>

using namespace std;

enum SEASON {
	SPRING, SUMMER, FALL, WINTER
};

void main() {
	SEASON season;
	season = SUMMER;
	cout << season << endl;

	int sel;
	sel = SUMMER;
	cout << sel << endl;
}
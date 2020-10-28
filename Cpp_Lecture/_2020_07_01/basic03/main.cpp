//3. Box.h, Box.cpp, main.cpp로 나누세요
#include "Box.h"
#include <iostream>
using namespace std;

int main() {
	Box b(10, 2);
	b.draw();
	cout << endl;
	b.setSize(7, 4);
	b.setFill('^');
	b.draw();
}
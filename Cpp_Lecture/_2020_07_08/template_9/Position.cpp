#include "Position.h"
#include <iostream>
using namespace std;
Position::Position(int x, int y)
{
	this->x = x;
	this->y = y;
}
void Position::showPosition()
{
	cout << "[" << this->x << ", "
			<< this->y << "]" << endl;
}

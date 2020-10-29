#include "Position.h"
#include <iostream>
using namespace std;

Position::Position(int x, int y)
{
	this->x = x;
	this->y = y;
	//연산자가 주는 직관적인 느낌을 훼손하는
	//코딩은 지양해야 한다
	/*this->x -= 100;
	this->y *= 92;*/
	//self 객체
}
void Position::showPosition()
{
	cout << "[" << this->x << ", " << this->y << "]" << endl;
}
Position& Position::operator++()
{
	++(this->x);
	++(this->y);
	return *this;
}
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
Position& Position::operator++()
{
	++(this->x);
	++(this->y);

	// 연산자가 주는 직관적인 느낌을 훼손하는
	// 코딩은 지양해야 한다
	//this->x -= 100;
	//this->y *= 92;

	// self 객체
	return *this;
}

Position Position::operator++(int)
{
	Position temp = *this;
	++(this->x);
	++(this->y);
	return temp;
}
Position Position::operator+(Position pos)
{
	Position temp;
	temp.x = this->x + pos.x;
	temp.y = this->y + pos.y;
	return temp;
}

Position Position::operator+(int num)
{
	Position temp;
	temp.x = this->x + num;
	temp.y = this->y + num;
	return temp;
}
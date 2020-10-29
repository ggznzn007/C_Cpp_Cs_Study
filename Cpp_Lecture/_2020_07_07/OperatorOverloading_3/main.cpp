

#include "Position.h"

void main()
{
	Position pos(10, 100);
	//pos.operator+(5);
	Position pos1 = pos + 5;
	pos1.showPosition();
}
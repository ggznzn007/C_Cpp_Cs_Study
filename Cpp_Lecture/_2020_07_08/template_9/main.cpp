#include <iostream>
#include "DataArray.h"
#include "Position.h"

using namespace std;

void main()
{
	const int ARR_NUM = 20;
	DataArray<Position> dataArr(ARR_NUM);
	for (int i = 0; i < ARR_NUM; i++) {
		Position pos(i * 2, i * 3);
		dataArr[i] = pos;
	}
	for (int i = 0; i < ARR_NUM; i++) {
		Position pos = dataArr[i];
		pos.showPosition();
	}
}

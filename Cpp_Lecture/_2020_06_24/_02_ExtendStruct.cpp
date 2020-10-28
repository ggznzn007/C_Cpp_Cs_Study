#include <iostream>

struct Point
{
	int x;
	int y;
	int bx;
	int by;
	void Add(Point a, Point b)
	{
		x = a.x + bx;
		y = a.y + by;
	}
	void Sub(Point a, Point b)
	{
		x = a.x - bx;
		y = a.y - by;
	}
};

void main()
{
	Point ptA, ptB, ptResult;
	ptA.x = 100;
	ptA.y = 200;
	ptB.x = 50;
	ptB.y = 100;
	ptResult.Add(ptA, ptB);
	printf("[%d, %d]\n", ptResult.x, ptResult.y);
	ptResult.Sub(ptA, ptB);
	printf("[%d, %d]\n", ptResult.x, ptResult.y);
}
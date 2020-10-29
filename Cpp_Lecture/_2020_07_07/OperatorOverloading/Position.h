#pragma once
class Position
{
private:
	int x, y;
public:
	Position(int x = 0, int y = 0);// 디폴트 매개변수
public:
	void showPosition();
	Position& operator++();
};


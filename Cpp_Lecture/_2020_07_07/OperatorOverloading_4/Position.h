#pragma once
class Position
{
private:
	int x, y;
public:
	Position(int x = 0, int y = 0);
public:
	void showPosition();
	Position& operator++();	    // 전위증가연산자
	Position operator++(int);	// 후위증가연산자
	Position operator+(Position pos);
	Position operator+(int num);

	// friend 설정을 해주면 friend 함수안에서
	// private 멤버를 접근할 수 있다.
	// 하지만 연산자 오버로딩을 위해
	// 캡슐화의 원칙을 위배했다.
	friend Position operator+(int num, Position pos);
};


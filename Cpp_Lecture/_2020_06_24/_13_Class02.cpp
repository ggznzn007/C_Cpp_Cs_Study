#include<iostream>

using namespace std;

class Point
{
private:
	int x;
	int y;

public:
	Point();
	~Point();

public:
	void SetPoint(int _x, int y);
	void AddPoint(Point& pt);
	void SubPoint(Point& pt);
	void MovePoint(int addX, int addY);
	void ShowPoint();
};

Point::Point()
{
	x = 0;
	y = 0;
	cout << "생성자호출" << endl;
}

Point::~Point()
{
	cout << "소멸자호출" << endl;
}

void Point::SetPoint(int _x, int _y)
{
	x = _x;
	y = _y;
}
void Point::AddPoint(Point& pt)
{
	x += pt.x;
	y += pt.y;
}
void Point::SubPoint(Point& pt)
{
	x -= pt.x;
	y -= pt.y;
}
void Point::MovePoint(int addX, int addY)
{
	x += addX;
	y += addY;
}
void Point::ShowPoint()
{
	cout << "x,y:[" << x << "," << y << "]" << endl;
}
void main()
{
	Point pt, pt1;
	pt.SetPoint(100, 100);
	pt.ShowPoint();// x,y (100,100) 위치 출력
	pt1.SetPoint(30, 30);// pt1 으로 30씩 선언
	pt.AddPoint(pt1);//pt + pt1
	pt.ShowPoint();// pt + pt1위치값 출력
	pt.SubPoint(pt1);// pt - pt1위치값 
	pt.ShowPoint();// pt - pt1위치값 출력
	pt.MovePoint(100, 100);//pt위치 100씩 이동
	pt.ShowPoint();//pt위치 100씩 이동 출력
}
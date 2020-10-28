//4. Add, Sub, Mul, Div 클래스를 만듭니다.
//이 클래스들은 공통적으로 4개의 멤버를 가지고 있습니다
//int a, b;
//void setValue(int x, int y);	// x를 a에, y를 b에 저장
//int calculate()					// 연산을 실행하고 결과 리턴
//프로그램은 무한루프를 돕니다
#include <iostream>

using namespace std;

class Add
{
private:
	int a, b;
public:
	void setAdd(int i, int j)
	{
		a = i;
		b = j;
	}
	int Cal()
	{
		return a + b;
	}
};

class Sub
{
private:
	int a, b;
public:
	void setSub(int i, int j)
	{
		a = i;
		b = j;
	}
	int Cal()
	{
		return a - b;
	}
};

class Mul
{
private:
	int a, b;
public:
	
	void setMul(int i, int j)
	{
		a = i;
		b = j;
	}
	int Cal()
	{
		return a * b;
	}
};

class Div
{
private:
	int a, b;
public:
	void setDiv(int i, int j)
	{
		a = i;
		b = j;
	}
	int Cal()
	{
		return a / b;
	}
};

int main()
{
	Add a;	Sub s; 	Mul m; 	Div d;
	int x, y;//입력받을 정수
	char c;//연산자 문자 입력
	while (true) {
		cout << "숫자와 연산자를 입력하세요:";
		cin >> x >> y >> c;
		if (c == '+') {// 입력받은 문자가 +면 
			a.setAdd(x, y);
			cout << a.Cal() << endl;// +연산출력
		}
		else if (c == '-') {// 입력받은 문자가 -면 
			s.setSub(x, y);
			cout << s.Cal() << endl;// -연산출력
		}
		else if (c == '*') {// 입력받은 문자가 *면
			m.setMul(x, y);
			cout << m.Cal() << endl;// *연산출력
		}
		else if (c == '/') {// 입력받은 문자가 /면
			d.setDiv(x, y);
			cout << d.Cal() << endl;// /연산출력
		}
	}
}
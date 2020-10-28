//sts래스에 유일하게 존재하는 변수이므로
//주로 객체간의 통합적으로 유일하게 관리하는 데이터를 선언해서 사용한다
#include <iostream>

#define NAME_LEN	30

using namespace std;

class Bitcamp
{
private:
	//일반 멤버 변수는 객체생성시
	//객체별로 생성된다
	char name[NAME_LEN];
	int studentCnt = 0;

	int sumStudentCnt = 0;
	//클래스가 선언시 static 멤버변수가 생성된다
	//객체보다 먼저 생성된다
	//아무리 객체가 많아도 클래스에 유일한 변수로 존재
	//모든 객체는 이 static 멤버 변수에 접근 가능
	//객체소속이 아니라 클래스 소속
	static int bitcampStudentCnt;

public:
	Bitcamp(const char* _name, int _studentCnt)
	{
		strncpy_s(name, sizeof(name),
			_name, strlen(_name) + 1);
		studentCnt = _studentCnt;

		sumStudentCnt += _studentCnt;
		bitcampStudentCnt += _studentCnt;
	}
	void showInfo()
	{
		cout << "지점명 : " << name << endl;
		cout << "학생수 : " << studentCnt << endl;
	}

	int getSumStudentCnt()
	{
		return sumStudentCnt;
	}

	static int getBitcampStudentCnt()
	{
		return bitcampStudentCnt;
	}
};

// static 멤버변수의 초기화 방법 
int Bitcamp::bitcampStudentCnt = 0;

void main()
{
	Bitcamp bitSeocho("비트캠프 본원", 300);
	Bitcamp bitGangnam("비트캠프 강남", 120);
	Bitcamp bitJongro("비트캠프 종로", 200);
	Bitcamp bitSinchon("비트캠프 신촌", 150);
	Bitcamp bitSeomyun("비트캠프 서면", 22);

	bitSeocho.showInfo();
	bitGangnam.showInfo();
	bitJongro.showInfo();
	bitSinchon.showInfo();
	bitSeomyun.showInfo();

	cout << "비트캠프의 총학생수는 " <<
		Bitcamp::getBitcampStudentCnt()
		<< " 입니다" << endl;

	cout << "비트캠프의 총학생수는 " <<
		bitSeomyun.getSumStudentCnt()
		<< " 입니다" << endl;
}
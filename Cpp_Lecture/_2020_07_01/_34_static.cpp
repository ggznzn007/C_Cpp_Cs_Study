#include <iostream>

#define NAME_LEN 30
using namespace std;

class Bitcamp
{
private:
	char name[NAME_LEN];
	int studentCnt = 0;

	/*static int bitcampStudentCnt;*/

public:
	Bitcamp(const char* _name,int _studentCnt)
	{
		strncpy_s(name, sizeof(name),
			_name, strlen(_name) + 1);
		studentCnt = _studentCnt;
	}
	void showInfo()
	{
		cout << " 지점명 : " << name << endl;
		cout << " 학생수 : " << studentCnt << endl;
	}
	int getStudentCnt()
	{
		return studentCnt;
	}
};

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

	int totalStudentCnt = 
		bitSeocho.getStudentCnt() +
		bitGangnam.getStudentCnt() +
		bitJongro.getStudentCnt() +
		bitSinchon.getStudentCnt() +
		bitSeomyun.getStudentCnt();

	cout << "비트캠프의 총 학생수는 " << totalStudentCnt
		<< "입니다" << endl;

}
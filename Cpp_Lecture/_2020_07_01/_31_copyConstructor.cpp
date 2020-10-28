#include <iostream>

#define NAME_LEN	20

using namespace std;

class Student
{
private:
	char* name;

public:
	Student()
	{
		name = new char[NAME_LEN]();
	}
	~Student()
	{
		delete[] name;
	}
public:
	void setName(const char* _name)
	{
		strncpy_s(name, NAME_LEN, _name, strlen(_name)+1);
	}
	void showName()
	{
		cout << "이름: " << name << endl;
	}
};

void main()
{
	Student st;// 매개변수 없는 생성자 호출
	st.setName("홍길동");
	st.showName();

	/* 멤버변수가 포인터변수이므로
	st의 name의 주소가 st1의 name에 복사된다
	그러므로 st.name과 st1.name은 같은 
	힙메모리의 공간을 가리키게 된다.
	1) st.name의 문자열을 바꾸면 
	   st1.name의 문자열도 영향을 받는다
	2) st의 소멸자가 호출될 때 힙메모리를 해제하므로
	   st1의 소멸자에서 힙메모리를 해제시도할 때
	   에러가 발생한다

	* 해결책 : 복사생성자를 만들때
	          name포인터 변수가 각각의 힙메모리
			  공간을 가리키도록 구현하다
	*/
	
	// 컴파일러가 생성한 default 복사생성자 호출
	// 멤버변수간의 복사가 이루어진다
	Student st1 = st;// Student st1(st);
	st1.showName();

	st1.setName("임꺽정");
	st.showName();
	st1.showName();
}// st소멸자, st1소멸자
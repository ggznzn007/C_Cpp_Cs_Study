/* MVC 패턴
Model : 데이터, 데이터베이스, 파일
 1) VO(Value Object)
   ; 값을 보관하는 역할의 객체
 2) DAO(Data Access Object)
   ; 저장소와 입출력을 담당하는 객체
*/
#include <iostream>

using namespace std;

class Student
{
private:
	string name;
	string address;
	int age;

public:
	Student(string name = "", string address = "", int age = 0) {
		this->name = name;
		this->address = address;
		this->age = age;
	}

public:
	// 변수에 대한 getter/setter 함수
	string getName() {
		return this->name;
	}
	Student& setName(string name) {
		this->name = name;
		return *this;
	}
	string getAddress() {
		return this->address;
	}
	Student& setAddress(string address) {
		this->address = address;
		return *this;
	}
	int getAge() {
		return this->age;
	}
	Student& setAge(int age) {
		this->age = age;
		return *this;
	}
};

void main()
{
	Student st;
	/*
	//setName(&st, "홍길동");
	Student& st0 = st.setName("홍길동");
	Student& st1 = st0.setAddress("지리산");
	Student& st2 = st1.setAge(24);
	*/
	st.setName("홍길동")
	  .setAddress("지리산")
	  .setAge(24);

	cout << st.getName() << ":" <<
		st.getAddress() << ":" <<
		st.getAge() << endl;
}
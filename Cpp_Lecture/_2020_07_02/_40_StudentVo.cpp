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
	Student(string name="", string address="", int age=0) {
		this->name = name;
		this->address = address;
		this->age = age;
	}

public:
	// 변수에 대한 getter/setter 함수
	string getName() {
		return this->name;
	}
	void setName(string name) {
		this->name = name;
	}
	string getAddress() {
		return this->address;
	}
	void setAddress(string address) {
		this->address = address;
	}
	int getAge() {
		return this->age;
	}
	void setAge(int age) {
		this->age = age;
	}
};

void main()
{
	Student st;
	st.setName("홍길동");
	st.setAddress("지리산");
	st.setAge(24);
	cout << st.getName() << ":" <<
		st.getAddress() << ":" <<
		st.getAge() << endl;

	cout << endl;

	Student st1("임꺽정", "구월산", 33);
	cout << st1.getName() << ":" <<
		st1.getAddress() << ":" <<
		st1.getAge() << endl;
}
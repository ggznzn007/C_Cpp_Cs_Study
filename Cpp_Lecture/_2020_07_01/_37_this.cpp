/* 멤버변수는 객체별로 따로 존재한다
   멤버함수는 첫번째 객체가 생성될 때 메모리에 올라간다.
   그 다음 객체들은 메모리가 올라간 함수를 공유해서 사용한다.

   함수는 로직의 그룹이므로 동일한 표현이기 때문에
   객체간에 공유해서 사용하게 된다.

   단. st0.showInfo()를 호출할 때는 st0의 name과 age를 출력
	   st1.showInfo()를 호출할 때는 st1의 name과 age를 출력
*/
#include <iostream>

using namespace std;

class Student
{
private:
	string name;
	int age;
public:
	//Student(Student* this, string _name, int _age)
	Student(string _name, int _age)
	{
		this->name = _name;
		this->age = _age;
	}
	//void showInfo(Student* this)
	void showInfo()
	{
		cout << "이름 : " << this->name << endl;
		cout << "나이 : " << this->age << endl;
	}
};

void main()
{
	Student st0("홍길동", 24);
	Student st1("임꺽정", 33);
	st0.showInfo();
	st1.showInfo();
}
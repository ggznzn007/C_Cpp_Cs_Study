#include"_06_struct_01.h"
#include"_06_struct_02.h"
#include<iostream>
using namespace std;

void main()
{
	Score:: Student st = { "홍길동",90,88,100 };
	cout << "이름: " << st.name << '\n';
	cout << "국어: " << st.kor << '\n';
	cout << "수학: " << st.math << '\n';
	cout << "영어: " << st.eng << '\n';

	Personal::Student st1 = { "홍길동", "지리산", 24, 174.5f, 76.5f };
	cout << "이름: " << st1.name << '\n';
	cout << "주소: " << st1.address << '\n';
	cout << "나이: " << st1.age << '\n';
	cout << "키: " << st1.height << '\n';
	cout << "몸무게: " << st1.weight << '\n';
}
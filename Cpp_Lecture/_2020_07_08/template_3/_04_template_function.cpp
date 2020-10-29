#include <iostream>

/*  
C++클래스를 통해 확장과 설계를 꿈꾸는 개발자 그룹과 
별개로 다른 그룹에서는 논리가 동일한 문법을 쉽게 
확장할 수있는 	template문법을 연구적용하기 시작한다
*/
/* 
Template은 Generic이라는 명칭으로 널리 사용 중
주로 논리는 동일하고 자료형만 다른 함수나 클래스 구현
대표적인 예는 자료구조, 알고리즘
라이브러리가 STL이다.

C#/Java에서는 Generic이라는 표현
이를 통해 만들어지 라이브러리를 collection이라 표현
*/

using namespace std;

//형판(붕어판 틀)
//add함수를 찍어내는 틀
//자료형에 따라서 
//add<int>(100,200)처리할때 함수를 만든다
//실제 함수가 생성된다

template<typename T> // 템플릿 사용 T대신 다른 글자 사용가능 
T add(T a, T b) {
	return a + b;
}

void main()
{
	cout << add<int>(100, 200) << endl;
	cout << add<double>(2.5, 3.4) << endl;

	//cout << add(100, 200) << endl;
	//cout << add(2.5, 3.4) << endl;
}
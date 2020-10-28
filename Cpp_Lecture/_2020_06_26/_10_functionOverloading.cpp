/* 매개변수는 다르고 함수의 이름이 같은 이런 문법을
<함수 오버로딩>이라 한다.
  c언어는 이것이 안된다
  왜냐하면 함수를 call할 때 함수의 이름만 가지고 찾기 때문에
  그러나 C++은 매개변수까지 고려해서 함수의 이름을 변형시키기
  때문에 매개변수에 따라 알맞은 함수를 선택해서 call할 수
  있다.

  같은 이름의 함수가 여러 개 만들 수 있다 == 함수 오버로딩
*/
#include <iostream>

using namespace std;

int add(int a, int b)
{
	return a + b;
}
double add(double a, double b)
{
	return a + b;
}
void main()
{
	cout << add(10, 20) << endl;
	cout << add(3.14, 5.2) << endl;
}
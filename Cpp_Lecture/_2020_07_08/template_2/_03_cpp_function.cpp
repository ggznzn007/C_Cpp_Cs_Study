#include <iostream>

/*  C++ 에서는
function overloading이 지원된다
동일한 이름의 함수라할지라도
매개변수가 다르면 컴파일러에 의해
호출이 구분된다
*/

using namespace std;

int add(int a, int b) {
	return a + b;
}
double add(double a, double b) {
	return a + b;
}
void main()
{
	cout << add(100, 200) << endl;
	cout << add(2.5, 3.4) << endl;
}
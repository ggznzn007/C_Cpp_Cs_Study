/* 
C언어에서 프로그램이 동작하다가 오류가 발생할 때
일반적으로 return값으로 처리한다.
원하는 return값이 아닐 때는 사용자한테 메시지를
보여주거나 프로그램을 종료한다.
*/
/* c언어 스타일의 오류 처리*/

#include <iostream>

using namespace std;

/// <summary>
/// 나누기를 하는 함수
/// </summary>
/// <param name="dividend">분자</param>
/// <param name="divider">분모</param>
/// <param name="result">결과값</param>
/// <returns>true면 성공, false면 실패</returns>
bool divide(double dividend, double divider, 
			double& result)
{
	if (divider == 0)
		return false;
	result = dividend / divider;
	return true;
}

void main()
{
	double num1, num2, result;

	cout << "A/B를 연산할 2개의 수 입력: ";
	cin >> num1 >> num2;

	if (divide(num1, num2, result) == true)
		cout << num1 << "/" << num2
			<< "=" << result << endl;
	else
		cout << "Invalid Value!!!" << endl;
}
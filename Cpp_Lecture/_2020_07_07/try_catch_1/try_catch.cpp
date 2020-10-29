/* 
<C++의 try~catch문의 탄생 배경>
1) 실행하는 코드영역과
   에러 영역을 분리하고 싶었다
2) 코드 가독성을 위해서
3) try{} 실행 코드 영역
   catch{} 에러 코드 영역
4) try{} 영역에서 발생한 예외를
   catch{}에서 받아서 처리하도록 구성되어 있다.
5) try{} 영역안에서든 아니면 호출되는 함수내에서든
   어디에서든 try{} 영역내에서 throw를 하게 되면
   catch로 바로 이동하게 된다.
   즉, 다음 실행코드는 실행하지 않고 바로
   catch영역으로 점프하게 된다.
*/
#include <iostream>

using namespace std;

void divide(double dividend, double divider,
			double& result)
{
	if (divider == 0)
		throw false;
	result = dividend / divider;
}

void main()
{
	double num1, num2, result;
	cout << "A/B를 연산할 2개의 수 입력: ";
	cin >> num1 >> num2;

	try {	// 코드 실행 영역
		divide(num1, num2, result);
		cout << num1 << "/" << num2
			<< "=" << result << endl;
	}catch (bool exception) {
		// 예외 처리 영역
		cout << "Invalid Value!!!" << endl;
	}
}
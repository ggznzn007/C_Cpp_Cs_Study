#include <iostream>

using namespace std;

int main()
{ 
	int n = 0;
	int sum = 0;
	cout << "끝 수를 입력하세요>> ";
	cin >> n;//키보드 입력값
	cout << endl;
	for (int k = 1; k <= n; k++) {
		sum += k; //키보드 입력값까지 누적값
	}
	cout << "1에서 "<< n <<"까지의 합은 "<< sum <<" 입니다."<<endl;
	// 1에서 출력부분 키보드입력값까지의 합은 누적값
	return 0;
}
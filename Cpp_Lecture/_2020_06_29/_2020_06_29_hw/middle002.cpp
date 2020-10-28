//2. 키보드로부터 2개의 정수를 읽어서 큰 수를 출력하세요

#include <iostream>

using namespace std;

int main()
{
	int i, j;
	cout << "2개의 정수를 입력하세요:";
	cin >> i >> j;
    cout << endl;
    if (i > j)
    {
        cout << "두 수 중에 큰 수는 "
            << i <<"입니다"<<endl;
    }
    else
    {
        cout << "두 수 중에 큰 수는 "
            << j << "입니다" << endl;
    }
    return 0;
}

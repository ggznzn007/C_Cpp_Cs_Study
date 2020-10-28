#include<iostream>
using namespace std;

int Plusint() 
{
    int num;
    cout << "정수를 입력하세요 : ";
    cin >> num; //정수를 입력받기
    for (int i = 0; i < num; i++) // 양의 정수로 범위 정하기
        cout << "감사합니다.\n";// 
    return 0;
}

int main()
{
    Plusint();
}

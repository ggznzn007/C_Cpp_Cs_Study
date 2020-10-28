#include<iostream>

using namespace std;

void main()
{
    int num = 1;

    while (num < 11)
    {
        if (num % 2 == 0)// 변수를 2로 나눈 나머지가 0이면 
        {
            cout<< num <<"\n";
        }
        num++;
    }
    cout <<"\n";

}
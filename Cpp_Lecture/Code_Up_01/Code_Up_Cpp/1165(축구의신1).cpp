#include <iostream>

using namespace std;

int main()
{
    int time, score;

    cin >> time >> score;
    time = 90 - time;
    if (time == 0)
    {
        cout << score;//90분 투입시 골을 넣지 못함
    }
    else
    {
        score += 1; //투입하자마자 골을 넣음
        if (time >= 5) {
            score += (time - 1) / 5;
        }
        cout << score;

        return 0;
    }
}
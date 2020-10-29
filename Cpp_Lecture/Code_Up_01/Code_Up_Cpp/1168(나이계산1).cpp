#include <iostream>

using namespace std;

int main()
{
    int bornData, sex;
    int bornYear;
    cin>>bornData>>sex;
    switch (sex)
    {
    case 1:
    case 2:
        bornYear = (bornData / 10000) + 1900;
        break;
    case 3:
    case 4:
        bornYear = (bornData / 10000) + 2000;
        break;
    }

    cout << 2012 - bornYear + 1;

    return 0;

}
#include <iostream>

using namespace std;

int main()
{
    int age;
    int bornData, yearInfo;
    cin>>age;
    bornData = 2012 - age + 1;
    if (bornData < 2000)
    {
        yearInfo = 1;
    }
    else
    {
        yearInfo = 3;
    }
    cout<<bornData % 100<<" "<<yearInfo;
    return 0;
}



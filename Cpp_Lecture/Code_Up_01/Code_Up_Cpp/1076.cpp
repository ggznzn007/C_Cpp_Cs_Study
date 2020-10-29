#include<iostream>

using namespace std;

int main()
{
    char a, b = 'a';
    cin >> a;
    do {
        cout << b<<" ";
        b++;
    } while (b <= a);

    return 0;
}
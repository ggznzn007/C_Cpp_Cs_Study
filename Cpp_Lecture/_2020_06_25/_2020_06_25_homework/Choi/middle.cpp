#include <stdio.h>
#include <iostream>

using namespace std;

void middle_01()
{
	int TD = 0;
	int TC = 0;

	std::cout << "숫자를 2개 입력하십시오." << std::endl;
	std::cin >> TD >> TC;
	TC = TD > TC ? TD : TC; // TD가 TC보다 크다면 / TC = TD, 아니면 TC = TC
	// TD = IF( TD > TC ) 
	std::cout << TC << std::endl;
}

void middle_02()
{
	int TD = 0;
	int TC = 0;

	std::cout << "숫자를 1개 입력하십시오." << std::endl;
	std::cin >> TD;
	
	TC = TD << 3; // TD의 비트를 왼쪽으로 3번 이동. 2진수의 왼쪽으로의 1번 이동은 2를 곱한것과 같다. 3번의 이동은 ( 1 = 2, 2 = 4, 3 = *) 8을 곱한것과 같다.
	std::cout << TD << "* 16/8*4 =" << TC << std::endl;
}

void middle_02_1()
{
	int TD = 0;
	int TC = 0;

	std::cout << "숫자를 1개 입력하십시오." << std::endl;
	std::cin >> TD;

	TC = TD << 4 >>3 << 2; // TD의 비트를 왼쪽으로 4번 이동 = 2의 4제곱 = *16, 오른쪽으로 3번이동 = 2의 3제곱 = /8. 왼쪽으로 2번 이동 2의 2제곱 = *4;
	std::cout << TD << "* 16/8*4 =" << TC << std::endl;
}

void main()
{
	middle_01();
	//middle_02();
	//middle_02_1();

}
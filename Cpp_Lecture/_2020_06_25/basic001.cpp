#include<iostream>
#include<cstdio>

//using namespace std;

void main()
{
	int num1, num2;
	std::cin >> num1 >> num2;
	std::cout << num1 << "/" << num2 << "="
		<< num1 / num2 << std::endl;
	std::cout << num1 << "%" << num2 << "="
		<< num1 % num2 << std::endl;
}
#include <iostream>

void main()
{
	int num1, num2;
	std::cout << "정수 2개 입력: " << std::endl;
	std::cin >> num1 >> num2;
	std::cout << num1 << "+" << num2 << "="
		<< num1 + num2 << std::endl;
}
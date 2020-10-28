#include <stdio.h>
#include <iostream>
using namespace std;

void for01()
{
	int TD = 0, TC = 0;
	char cd = 0;
	std::cout << " 숫자를 2개 입력하세요.\n" << std::endl;
	std::cin >> TD >> TC;
	std::cout << " 하고 싶은 연산을 입력하세요\n" << std::endl;
	std::cin >> cd;
	switch (cd)
	{
	case '+':
			std::cout << TD + TC << std::endl;
			break;
	case '-':
		std::cout << TD - TC << std::endl;
		break;
	case '*':
		std::cout << TD * TC << std::endl;
		break;
	case '/':
		std::cout << TD / TC << std::endl;
		break;
	default:
		break;
	}
}

void for02()
{
	int TD = 0, TC = 0;

	std::cout << " 숫자를 1개 입력하세요.\n" << std::endl;
	std::cin >> TD;

	if (-TD > TD)
	{
		TD = -TD;
	}
	std::cout << " 절대 값 : " << TD << std::endl;
}

void for05()
{
	int TD = 0;
	int TDO = 0;
	std::cout << "나무를 찍으세요." << std::endl;
	std::cin >> TD;
	while (1)
	{
		std::cout << TDO + 1 << " 나무를 찍는다.\n" << std::endl;
		++TDO;
		if (TDO == TD)
		{
			break;
		}
	}
	std::cout << "\n나무를 캐었다.\n" << std::endl;
}

void for06()
{
	int TD = 0;
	int TDO = 0;
	std::cout << "나무를 찍으세요." << std::endl;
	std::cin >> TD;
	while (1)
	{
		std::cout << TDO + 1 << " 나무를 찍는다.\n" << std::endl;
		++TDO;
		if (TDO == TD)
		{
			break;
		}
	}
	std::cout << "\n나무가 쿵.\n" << std::endl;
}

void for07()
{
	int TD = 0;
	int TC = 0;
	int TDO = 0;

	std::cout << "나무를 벨 횟루를 입력하시오." << std::endl;
	std::cin >> TD;
	std::cout << "쿵 소리의 간격을 정하시오." << std::endl;
	std::cin >> TC;

	while (1)
	{
		std::cout << TDO + 1 << " 나무를 찍는다.\n" << std::endl;
		++TDO;
		if (TDO % TC == 0)
		{
			std::cout << "\n쿵.\n" << std::endl;
		}
		if (TDO == TD)
		{
			break;
		}
	}
	std::cout << "\n나무를 캐었다~\n" << std::endl;
}

void for08()
{
	int TD = 0;
	int TC = 0;
	int TDO = 0;

	std::cout << "나무를 벨 횟루를 입력하시오." << std::endl;
	std::cin >> TD;
	std::cout << "쩍~ 소리의 간격을 정하시오." << std::endl;
	std::cin >> TC;

	while (1)
	{
		std::cout << TDO + 1 << " 나무를 찍는다.\n" << std::endl;
		++TDO;
		if (TDO % 2 == 0)
		{
			std::cout << "\n짝.\n" << std::endl;
		}
		else
		{
			std::cout << "\n쿵.\n" << std::endl;
		}

		if (TDO % TC == 0)
		{
			std::cout << "\n쩍~\n" << std::endl;
		}
		if (TDO == TD)
		{
			break;
		}
	}
	std::cout << "\n나무를 캐었다~\n" << std::endl;
}

void for10()
{
	int TD = 0;
	int TC = 0;
	int TDO = 0;
	int TrEnd = 0;

	std::cout << "나무를 벨 횟루를 입력하시오." << std::endl;
	std::cin >> TD;
	std::cout << "쿵 소리의 간격을 정하시오." << std::endl;
	std::cin >> TC;

	while (1)
	{
		std::cout << TDO + 1 << " 나무를 찍는다.\n" << std::endl;
		++TDO;

		if (TDO % TC == 0)
		{
			std::cout << "\n쿵\n" << std::endl;
		}

		if (TDO == TD)
		{
			break;
		}

		std::cout << "나무를 계속 베시겠습니까?" << std::endl;
		std::cin >> TrEnd;

		if (TrEnd == -1)
		{
			break;
		}
	}
	std::cout << "\n나무를 캐었다~\n" << std::endl;
}




void main()
{
	//for05();
	//for06();
	//for07();
	//for08();
	//for10();
	//for01();
	//for02();
}
#include "Human.h"
#include "ComputerEngineer.h"
#include "Developer.h"
#include "ServerManager.h"

void main()
{
	/* 1) 자식 객체안에는 부모 객체가 존재한다
	   2)부모의 생성자, 자식의 생성자
		 자식의 소멸자, 부모의 소멸자 순으로 호출 된다
		 '부모님이 나를 감싸안는다'*/
	Developer dev;
}

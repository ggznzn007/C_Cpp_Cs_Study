#include "Human.h"
#include "Developer.h"

void main()
{
	Human human;
	human.play();

	Developer dev;
	dev.play();

	/*C++에서는 다형성이라는 문법을 적용하기 위해서
	다음과 같은 문법을 적용하였다
	부모의 포인터 변수 = 자식 객체*/
	Human* hu = &dev;
	hu->play();		// Human::play() 호출
}
#include "Human.h"
#include "Developer.h"

void main()
{
	Human human;
	human.play();

	Developer dev;
	dev.play();

	/* play() 함수를 만들 때 
	virtual 키워드를 붙여주면
	부모 포인터 변수를 통해
	자식 객체의 함수를 호출할 수 있다
	*/
	Human* hu = &dev;
	hu->play();		
}
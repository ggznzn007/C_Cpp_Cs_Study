#include "Human.h"
#include "Developer.h"

void main()
{
	Human human;
	human.play();

	Developer dev;
	dev.play();

	/* 
	virtual: 가상 함수
			 사실상 (객체를 통한) 함수
	*/
	// 주소 = 객체(실체)
	Human* hu = &dev;
	hu->play();		
}
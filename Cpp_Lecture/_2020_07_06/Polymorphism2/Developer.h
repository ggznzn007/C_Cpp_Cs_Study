#pragma once
#include "Human.h"
class Developer : public Human
{
	/*Human클래스이 play()에 virtual을 붙여서
	안붙여도 자동으로 virtual이 적용되지만
	가독성을 위해 관습적으로 virtual을 붙여준다*/
public:
	virtual void play();
};


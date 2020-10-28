#pragma once
class Human
{
	/*Human의 play()에 virtual을 붙이면
	자동으로 상속받는 자식 클래스의 play()에도
	virtual이 적용된다*/
public:
	virtual void play();
};


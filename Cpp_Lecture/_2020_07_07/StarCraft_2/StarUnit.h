#include <combaseapi.h>
#pragma once
interface StarUnit
{
	//추상 매서드가 포함되어 있으므로 추상클래스
	//단, 모든 매서드(멤버함수)가 추상매서드이므로
	//인터페이스라는 말을 더 많이 사용

 /*<인터페이스 역할>
	1) 클래스 포인터 배열 :관리
	2) 매개변수
	3) 오로지 자식 객체를 담는 역할
	4) 유연한 연결
	5) 설계 디자인 패턴
	*/
public:
	//순수 가상 함수(추상 매서드)
	virtual void move() = 0;
	virtual void attack() = 0;
	virtual void die() = 0;
};


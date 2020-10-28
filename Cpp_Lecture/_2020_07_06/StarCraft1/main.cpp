#include "StarUnit.h"
#include "Scv.h"
#include "Marine.h"
#include "Hydra.h"
#include "FireSoldier.h"
#include <Windows.h>
#include <time.h>
#include <stdlib.h>

//다형성의 비유적인 표현
//1) 집안에서는 순응하는 자식
//2) 나가서는 자신만의 개성을 발휘
//3. 다형성의 장점

//1) 포인터 배열로 모든 파생 클래스를 일괄 묶을 수 있음
//2) 부모 포인터 변수를 통해 자식 객체를 전달해도 
//	 virtual함수는 자식 객체 고유의 동작을 하게 된다
//3) 새로운 유닛이 필요할 때 부모를 상속만 받아도
//	 기존 코드에 참여가능
//	 -부모 포인터 배열 : 묶어서 관리
//	 -부모 포인터 매개변수 : 자식객체: 고유의 기능
//	 -부모클래스 상속 후 virtual함수 추가해주면
//    기존 코드를 수정없이 사용가능
#include <iostream>

using namespace std;

int randomSleep()
{
	int delay = rand() % 2000 + 500;// 500~ 2499까지
	Sleep(delay);
	return delay;
}



void hitAndRun(StarUnit* pUnit)
{
	pUnit->attack();
	int delay = randomSleep();
	if (delay < 1500)	
		pUnit->die();
	else				
		pUnit->move();
	
}

void main()
{
	srand((unsigned int)time(NULL));// 난수 초기화
	//1. 다형성 자식관리
	//자식객체들을 부모 포인터 변수
	//배열로 일괄 저장할 수 있다
	StarUnit* unit[] = { new Scv(), 
						 new Marine(),
						 new Hydra(), 
						 new FireSoldier() };
	//2. 다형성 자식 고유의 특징 발현
	// 자식이 재정의할 함수를 virtual로 
	// 지정하면 부모 포인터 변수로 넘겨도
	// 각 객체 고유의 동작이 진행된다
	hitAndRun(unit[3]);

	delete unit[0];
	delete unit[1];
	delete unit[2];
	delete unit[3];
};

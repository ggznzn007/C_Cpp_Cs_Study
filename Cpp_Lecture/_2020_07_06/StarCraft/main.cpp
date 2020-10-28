#include "StarUnit.h"
#include "Scv.h"
#include "Marine.h"
#include "Hydra.h"
#include <Windows.h>
#include <time.h>
#include <stdlib.h>
//다형성이란?
//1) 하나의 부모로부터 파생된 여러 클래스
//2) 공통점(부모로부터 상속)
//3) 특성을 부여한다(재정의가 이루어진다)
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
						 new Hydra() };
	//2. 다형성 자식 고유의 특징 발현
	// 자식이 재정의할 함수를 virtual로 
	// 지정하면 부모 포인터 변수로 넘겨도
	// 각 객체 고유의 동작이 진행된다
	hitAndRun(unit[2]);

	delete unit[0];
	delete unit[1];
	delete unit[2];
};

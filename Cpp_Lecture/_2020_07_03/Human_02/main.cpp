#include "Human.h"
#include "ComputerEngineer.h"
#include "Developer.h"
#include "ServerManager.h"

/*
1) Overloading(과적)
  ; 동일한 함수명이 많다
   (단, 매개변수가 다르다)
2) Overriding(재정의)
  ; 최우선의
    이전의 것을 덮었다
  ; 부모가 물려준 함수를 다시 재사용(재정의)
    내 함수가 최우선이다
*/

void main()
{
	Developer dev("홍길동", 24, 3, 12);

	// Human이 물려준 그대로
	dev.eat();		

	// ComputerEnginner가 물려준 함수를 확장
	// Overriding : 재정의, 물려준 것에서 확장/변경
	dev.overTime(); 

	dev.info();// 확장 재정의
}
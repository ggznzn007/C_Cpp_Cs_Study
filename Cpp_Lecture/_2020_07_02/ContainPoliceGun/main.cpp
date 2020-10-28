/*객체지향으로 기능을 확장해 나갈때 
1. 먼저 포함관계인지 종속관계인지 판단한다
2. 종속관계가 아닐 때는 상속을 피하고 
포함관계를 사용한다
3. 종속관계일 때는 관리목적으로 상속을 사용할 수 있다
그러나 무조건 사용해야 하는 것은 아니다

상속: 프레임워크 설계시
	자식클래스들을 모아서 관리할 때
포함: 일반적으로 다른 클래스의 기능을 사용할 때
*/

#include "ForcePolice.h"
#include "NursePolice.h"

void main()
{
	ForcePolice fpolice;
	fpolice.wearSuit();
	fpolice.fireGun();
	fpolice.snap();

	NursePolice npolice;
	npolice.wearSuit();
	npolice.measureTemperature();
	npolice.measureTemperature();
	npolice.measureTemperature();
	npolice.measureTemperature();
	npolice.measureTemperature();
	npolice.measureTemperature();
	npolice.measureTemperature();
	npolice.measureTemperature();
	npolice.measureTemperature();
	npolice.measureTemperature();
}
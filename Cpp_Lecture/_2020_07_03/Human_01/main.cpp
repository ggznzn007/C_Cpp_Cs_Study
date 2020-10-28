#include "Human.h"
#include "ComputerEngineer.h"
#include "Developer.h"
#include "ServerManager.h"

void main()
{
	/* Developer의 생성자가 호출된다
	 그런데 Developer 생성자의 member initialize영역에
	 ComputerEngineer 생성자한테 값을 전달하도록 하였다
	 ComputerEngineer의 member initialize영역에는
	 Human 생성자한테 값을 전달하도록 하였다
	 부모 생성자를 통해서 각각의 멤버 변수를 초기화하였다
	*/
	Developer dev("홍길동", 24, 3, 12);
	dev.eat();
	dev.overTime();
	dev.info();
}
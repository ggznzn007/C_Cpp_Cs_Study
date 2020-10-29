/* <파일 분할 절차>
1. #define문, enum형, 구조체를
  h(헤더파일)을 만들어서 옮긴다.
  옮기고 나서 #include "생성헤더파일" 을
  표시해준다.
  (생성된 헤더파일에는
  #pragma once 옵션이 있어야 한다.
  이 옵션은 이곳저곳에서 #include를
  통해 헤더파일을 포함할 때 중복된 정의에
  의해서 에러가 발생하는 것을 방지해준다)
2. 함수를 선언부(원형)와 정의부(구현부)로 
   분리한다.
   (c 컴파일러는 main에서 다른 함수를 사용할 때
   반드시 main보다 이전에 함수가 존재해야 한다.
   그런데 함수의 원형만 main이전에 있고
   함수의 구현부는 main보다 아래에 있거나
   다른 파일에 있어도 무방하다)
3. 함수의 선언부는 h(헤더파일)에 이동
   함수의 구현부는 c(소스파일)에 이동
   이전에 있던 파일에는 #include "함수h파일"
   추가해준다.
4. 새로 만든 h, c에 없는 정보가 있다면
   정보가 존재하는 h파일을 #include 해줘야 한다.
5. 전역변수는 h가 아니라 c파일에 존재해야 한다
   다른 파일에서 전역변수를 사용하려면
   extern 키워드로 선언해줘야 한다.
   그리고 공유해서 사용할 때는 
   변수초기화하면 안된다.
   (초기화하면 재정의 오류 발생)
6. 함수종류를 분류하여 각각 파일의 헤더(h), 소스(c)
  를 생성해서 분리한다.
*/

#include <stdio.h>
#include <string.h>
#include "addressDefine.h"	// 상수, 구조체 정보
#include "addressProcess.h"	// 함수의 원형 정보
#include "addressModel.h"	// loadAllAddress

// secure함수를 안써도 에러를 발생시키지 않는다
//#define _CRT_SECURE_NO_WARNINGS

Address g_Address[ADDR_LEN];
int g_addrCnt = 0;

void main()
{
	int isRun = 1;	// 1인 경우 반복, 0인 경우 중지
	loadAllAddress();
	while (isRun)
	{
		showMenu();
		int sel = getSelMenu();
		isRun = processAddress(sel);
	}
}



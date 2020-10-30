#include <stdio.h>

typedef struct _Calc
{
	int num0, num1;
	int result;
	void (*add)(struct _Calc* pCalc);
	void (*sub)(struct _Calc* pCalc);
	void (*mul)(struct _Calc* pCalc);
	void (*div)(struct _Calc* pCalc);
	void (*viewResult)(struct _Calc* pCalc);
}Calc;
void add(Calc* pCalc) { pCalc->result = pCalc->num0 + pCalc->num1; }
void sub(Calc* pCalc) { pCalc->result = pCalc->num0 - pCalc->num1; }
void mul(Calc* pCalc) { pCalc->result = pCalc->num0 * pCalc->num1; }
void div(Calc* pCalc) { pCalc->result = pCalc->num0 / pCalc->num1; }
void viewResult(Calc* pCalc) {
	printf("결과값은 %d입니다\n", pCalc->result);
}
void main() {
	Calc calc = { 0, 0, 0, add, sub, mul, div, viewResult };

	calc.num0 = 100, calc.num1 = 200;
	calc.add(&calc);
	calc.viewResult(&calc);
}
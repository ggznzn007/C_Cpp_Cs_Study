#include <stdio.h>

int addInt(int a, int b) {
	return a + b;
}
double addDouble(double a, double b) {
	return a + b;
}
void main()
{
	printf("%d\n", addInt(100, 200));
	printf("%lf\n", addDouble(2.5, 3.4));
}
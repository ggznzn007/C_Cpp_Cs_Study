#include <stdio.h>

int add(int a, int b) {
	return a + b;
}
double add(double a, double b) {
	return a + b;
}
void main()
{
	printf("%d\n", add(100, 200));
	printf("%lf\n", add(2.5, 3.4));
}
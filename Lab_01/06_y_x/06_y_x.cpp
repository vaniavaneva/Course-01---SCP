#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	double x, y;
	scanf_s("%lf", &x);
	if (x >= 1) {
		y = log10(x) + 1.82;
	}
	else {
		y = pow(x, 2) + 7 * x + 8.82;
	}
	printf("%.2f", y);
}
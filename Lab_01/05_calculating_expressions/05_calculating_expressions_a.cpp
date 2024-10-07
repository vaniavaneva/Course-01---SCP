#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    scanf_s("%lf", &x);
    printf("%lf", sqrt(pow(x, 2) -(6 * x) + 9));
}
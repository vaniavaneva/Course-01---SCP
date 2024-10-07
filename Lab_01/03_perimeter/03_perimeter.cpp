#include <iostream>
#include <stdio.h>

int main()
{
    double a;
    double b;
    scanf_s("%lf", & a);
    scanf_s("%lf", &b);
    printf("area=%.2lf\n", a * b);
    printf("perimeter=%.2lf\n", a * 2 + b * 2);
}
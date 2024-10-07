#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
    double b;
    scanf_s("%lf", &b);
    printf("%lf", (sqrt(b) - sqrt(5)) * (sqrt(b) + sqrt(5)));
}
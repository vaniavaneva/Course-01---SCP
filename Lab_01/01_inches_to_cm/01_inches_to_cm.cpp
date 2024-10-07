#include <iostream>
#include <stdio.h>

int main()
{
    double inches;
    scanf_s("%lf", &inches);
    double cm = inches * 2.54;
    printf("cm=%lf", cm);
}
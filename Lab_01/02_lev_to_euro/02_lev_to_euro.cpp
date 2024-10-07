#include <iostream>
#include <stdio.h>

int main()
{
    double lev;
    scanf_s("%lf", &lev);
    double euro = lev * 2.54;
    printf("euro=%lf", euro);
}
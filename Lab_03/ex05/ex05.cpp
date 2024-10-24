#include <iostream>
#include <math.h>

int main()
{
    int num;
    scanf_s("%d", &num);
    if (num % 2 == 0) {
        num = pow(num, 2);
    }
    else {
        num *= 10;
    }
    printf("%d", num);
}
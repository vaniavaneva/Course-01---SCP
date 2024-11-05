#include <iostream>
#include <math.h>

int main()
{
    int n, stepen = 0;
    scanf_s("%d", &n);
    while (stepen <= n) {
        int num = pow(2, stepen);
        printf("%d, ", num);
        stepen++;
    }
}
#include <iostream>

int main()
{
    int n;
    int sum = 0;
    scanf_s("%d", &n);
    while (n != 0) {
        sum += n;
        scanf_s("%d", &n);
    }
    printf("Sum = %d", sum);
}
#include <iostream>

int main()
{
    int a, b;
    scanf_s("%d", &a);
    scanf_s("%d", &b);
    while (b != 0) {
        if (b == 0) {
            break;
        }
        int temp = b;
        b = a % b;
        a = temp;
    }
    printf("%d", a);
}
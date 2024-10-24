#include <iostream>

int main()
{
    float num1, num2;
    scanf_s("%f", &num1);
    scanf_s("%f", &num2);
    if (num1 > num2) {
        printf("%f", num1);
    }
    else {
        printf("%f", num2);
    }
}
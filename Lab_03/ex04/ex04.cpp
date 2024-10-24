#include <iostream>

int main()
{
    float num1, num2, num3;
    scanf_s("%f", &num1);
    scanf_s("%f", &num2);
    scanf_s("%f", &num3);
    if (num1 > num2) {
        if (num1 > num3) {
            printf("%f", num1);
        }
        else {
            printf("%f", num3);
        }
    }
    else {
        if (num2 > num3) {
            printf("%f", num2);
        }
        else {
            printf("%f", num3);
        }
    }
}
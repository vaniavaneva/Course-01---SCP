#include <iostream>

int main()
{
    float num1, num2;
    char op;
    scanf_s("%f", &num1);
    scanf_s("%f", &num2);
    scanf_s(" %c", &op, 1);
    switch (op) 
    {
        case '+':
            printf("%.2f\n", num1 + num2);
            break;
        case '-':
            printf("%.2f\n", num1 - num2);
            break;
        case '*':
            printf("%.2f\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%.2f\n", num1 / num2);
            }
            else {
                printf("Error: Division by zero\n");
            }
            break;
        case '%':
            if (int(num2) != 0) {
                printf("%d\n", int(num1) % int(num2));
            }
            else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Error\n");
            break;
    }

    return 0;
}
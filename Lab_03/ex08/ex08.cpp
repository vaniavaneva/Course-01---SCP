#include <iostream>

int main()
{
    int num;
    scanf_s("%d", &num);
    if (num >= -10 && num <= 10){
        if (num > 0) {
            printf("Positive");
        }
        else if (num < 0) {
            printf("Negative");
        }
        else {
            printf("0");
        }
    }
    else {
        printf("Error. Number is out of range [-10; 10].");
    }
}
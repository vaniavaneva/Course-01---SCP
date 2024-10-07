#include <iostream>
#include <stdio.h>

int main()
{
    double dog, cat;
    scanf_s("%lf", &dog);
    scanf_s("%lf", &cat);
    double costDog = dog * 2.5;
    double costCat = cat * 4.0;
    printf("Sum food = %.2f lv.\n", costDog + costCat);
    printf("Dog food = %.2f lv.\n", costDog);
    printf("Cat food = %.2f lv.\n", costCat);
}
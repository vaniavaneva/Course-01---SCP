#include <iostream>

int main()
{
    float side1, side2, side3, ha;
    scanf_s("%f", &side1);
    scanf_s("%f", &side2);
    scanf_s("%f", &side3);
    scanf_s("%f", &ha);
    if (side1 == side2 && side2 == side3) {
        printf("equilateral\n"); //равностранен
    }
    else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("isosceles\n");   //равнобедрен
    }
    else {
        printf("scalene\n");     //разностранен
    }
    float area = side1 * ha * 0.5;
    printf("Area = %.2f", area);
}
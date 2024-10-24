#include <iostream>
#include <cmath>
#include <cstring>
#define Math_pi 3.14

int main()
{
    char str[256];
    scanf_s("%s", str, (unsigned)_countof(str));
    float p, s, a, b, h, r;
    if (strcmp(str, "Circumference") == 0) {
        scanf_s("%f", &r);
        printf("P = %f", 2 * Math_pi * r);
    }
    else if (strcmp(str, "Circle") == 0) {
        scanf_s("%f", &r);
        printf("S = %f", Math_pi * r * r);
    }
    else if (strcmp(str, "Rectangle") == 0) {
        scanf_s("%f", &a);
        scanf_s("%f", &b);
        printf("S = %f", a * b);
    }
    else if (strcmp(str, "Square") == 0) {
        scanf_s("%f", &a);
        printf("S = %f", a * a);
    }
    else if (strcmp(str, "Triangle") == 0) {
        scanf_s("%f", &a);
        scanf_s("%f", &h);
        printf("S = %f", (a * h) / 2);
    }
    else if (strcmp(str, "Trapezoid") == 0) {
        scanf_s("%f", &a);
        scanf_s("%f", &b);
        scanf_s("%f", &h);
        printf("S = %f", ((a + b) * h) / 2);
    }
    else if (strcmp(str, "Parallelogram") == 0) {
        scanf_s("%f", &a);
        scanf_s("%f", &h);
        printf("S = %f", a * h);
    }
    else {
        printf("Error");
    }
}
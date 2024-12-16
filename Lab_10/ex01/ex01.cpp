#include <iostream>
#include <cmath>
#include <stdio.h>

double SmallerX(int, int, int, bool*);

int main()
{
    int a, b, c;
    printf("Enter a, b, c of the quadratic equation:\n");
    scanf_s("%d", &a);
    scanf_s("%d", &b);
    scanf_s("%d", &c);
    bool error = false;
    double smaller_x = SmallerX(a, b, c, &error);
    if (error) {
        printf("Error: The equation has no real roots (D < 0).\n");
    }
    else {
        printf("The smaller root is: %.2f\n", smaller_x);
    }

    return 0;
}

double SmallerX(int a, int b, int c, bool* error)
{
    double D = pow(b, 2) - 4 * a * c;
    if (D > 0) {
        double x1 = (-b - sqrt(D)) / (2.0 * a);
        double x2 = (-b + sqrt(D)) / (2.0 * a);
        return x1 < x2 ? x1 : x2;
    }
    else if (D == 0) {
        return -b / (2.0 * a);
    }
    else {
        *error = true;
        return 0;
    }
}


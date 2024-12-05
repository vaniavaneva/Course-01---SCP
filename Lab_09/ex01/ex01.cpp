#include <iostream>
#include<math.h>

#define M_PI 3.14159265358979323846

double Circle(int);
float Rectangle(int, int);
int Valid(int, int, int);
double Triangle(int, int, int);

int main()
{
    int r, a, b, ta, tb, tc;
    printf("Circle r = ");
    scanf_s("%d", &r);
    printf("Rectangle side a = ");
    scanf_s("%d", &a);
    printf("Rectangle side b = ");
    scanf_s("%d", &b);
    printf("Triangle side a = ");
    scanf_s("%d", &ta);
    printf("Triangle side b = ");
    scanf_s("%d", &tb);
    printf("Triangle side c = ");
    scanf_s("%d", &tc);
    printf("\n\nCircle area = %.2lf", Circle(r));
    printf("\nRectangle area = %.2f", Rectangle(a, b));
    if (Valid(ta, tb, tc) == 0) {
        printf("\nTriangle area = %.2lf", Triangle(ta, tb, tc));
    }
    else {
        printf("\nInvalid parameters for triangle.");
    }

    return 0;
}

double Circle(int r) {
    double S = M_PI * pow(r, 2);
    return S;
}

float Rectangle(int a, int b) {
    float S = a * b;
    return S;
}

int Valid(int a, int b, int c) {
    if (a + b > c && a + c > b && b + c > a) {
        return 0;
    }
    else {
        return 1;
    }
}

double Triangle(int a, int b, int c) {
    float P = 0.5 * a + b + c;
    double S = sqrt(P * (P - a) * (P - b) * (P - c));
    return S;
}
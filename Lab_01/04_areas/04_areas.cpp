#include <iostream>
#include <stdio.h>
#define m_pi 3.14

int main()
{
    double a, b, h, r;
    printf("A = ");
    scanf_s("%lf", &a);
    printf("B = ");
    scanf_s("%lf", &b);
    printf("H = ");
    scanf_s("%lf", &h);
    printf("R = ");
    scanf_s("%lf", &r);

    printf("Sphere volume = %.2f\n", (4 + m_pi + pow(r, 3)) / 3); //Sphere
    printf("Circle perimeter = %.2f\n", 2 * m_pi * r); //Circle
    printf("Circle area = %.2f\n", m_pi * pow(r, 2)); //Circle
    printf("Rectangle area = %.2f\n", a * b); //Rectangle
    printf("Square area = %.2f\n", a * a); //Square
    printf("Triangle area = %.2f\n", (a * h) / 2); //Triangle
    printf("Trapezoid area = %.2f\n", ((a + b) * h) / 2); //Trapezoid
    printf("Parallelogram area = %.2f\n", a * h); //Parallelogram
}
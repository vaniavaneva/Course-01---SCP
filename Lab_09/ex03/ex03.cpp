#include <iostream>
#include<math.h>
#include <cmath>

double Factorial(int);
double Exponential(double);

int main()
{
    double x;
    printf("Enter the value of x: ");
    scanf_s("%lf", &x);

    printf("\n e^x = %lf", Exponential(x));
    printf("\n e^x (using exp()) = %lf", exp(x));

    double difference = fabs(Exponential(x) - exp(x));
    printf("\n Difference between the two methods: %lf", difference);
    
    return 0;
}

double Factorial(int n) {
    double fact = 1.0;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

double Exponential(double x) {
    double result = 1.0;
    double term;
    int n = 1;

    while (true) {
        term = pow(x, n) / Factorial(n);
        if (fabs(term) < 1e-8)
            break;

        result += term;
        n++;
    }

    return result;
}

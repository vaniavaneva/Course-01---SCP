#include <iostream>

int main()
{
    //°F = (9 / 5) °C + 32
    double c;
    scanf_s("%lf", &c);
    printf("°F = %.2f °C", (static_cast<double>(9) / 5) * c + 32);
}
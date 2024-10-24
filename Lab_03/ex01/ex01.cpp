#include <iostream>

int main()
{
    int year;
    scanf_s("%d", &year);
    if (year % 10 == 0 && year % 4 == 0) {
        printf("With the population counting in USA and the Olympic Games. %d", year);
    }
    else if (year % 4 == 0) {
        printf("With the Olympic games. %d", year);
    }
    else if (year % 10 == 0) {
        printf("With the population counting in USA. %d", year);
    }
    else {
        printf("Error");
    }
}
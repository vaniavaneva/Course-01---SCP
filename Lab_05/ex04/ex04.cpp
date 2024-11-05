#include <iostream>

int main()
{
    int num;
    scanf_s("%d", &num);
    while (!(num >= 1 && num <= 56)) {
        scanf_s("%d", &num);
    }
}
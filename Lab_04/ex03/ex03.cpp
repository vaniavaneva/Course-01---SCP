#include <iostream>

int main()
{
    for (int x = 1; x <= 100; x++) {
        printf("%d, ", x);
    }
    printf("\n\n");
    for (int x = 100; x >= 1; x--) {
        printf("%d, ", x);
    }
    printf("\n\n");
    int x1 = 1;
    int x2 = 100;
    while (x1 <= 50 && x2 >= 51) {
        printf("%d, %d, ", x1, x2);
        x1++;
        x2--;
    }
}
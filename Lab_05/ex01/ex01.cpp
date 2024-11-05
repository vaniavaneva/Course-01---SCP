#include <iostream>

int main()
{
    int n = 1;
    while (n <= 7) {
        for (int i = 1; i <= n; i++) {
            printf("%d ", i);
        }
        printf("\n");
        n++;
    }

    printf("\n");

    int y = 7;
    while (y >= 1) {
        for (int i = 1; i <= y; i++) {
            printf("%d ", i);
        }
        printf("\n");
        y--;
    }

    printf("\n");
    int _ = 4;
    for (int i = 1; i <= _; i++) {
        for (int s = 1; s < i; s++) {
            printf("  ");
        }
        for (int j = i; j <= _; j++) {
            printf("%d ", j);
        }
        for (int j = _; j >= i; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
    for (int i = _ - 1; i >= 1; i--) {
        for (int s = 1; s < i; s++) {
            printf("  ");
        }
        for (int j = i; j <= _; j++) {
            printf("%d ", j);
        }
        for (int j = _; j >= i; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
}
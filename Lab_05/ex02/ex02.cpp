#include <iostream>

int main()
{
    int row = 1, num = 1, n;
    scanf_s("%d", &n);
    while (num <= n) {
        for (int i = 0; i < row; i++) {
            if (num > n) break;
            printf("%d ", num);
            num++;
        }
        printf("\n");
        row++;
    }
}
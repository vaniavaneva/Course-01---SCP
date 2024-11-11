#include <iostream>

int main()
{
    const int n = 3, m = 3;
    int matrix[n][m], sumLine = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf_s("%d", &matrix[i][j]);
        }
    }
    printf("Sum matrix rows: \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sumLine += matrix[i][j];
        }
        printf("Row %d sum = %d\n", i, sumLine);
        sumLine = 0;
    }
}
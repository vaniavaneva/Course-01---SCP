#include <iostream>

int main()
{
    int n, m, countOdd = 0;
    float matrix[10][10];
    float sumPositive = 0, sumOdd = 0, sumDiagonal = 0;
    scanf_s("%d", &n);
    scanf_s("%d", &m);
    if (n <= 10 && m <= 10) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf_s("%f", &matrix[i][j]);

                // sum pos elements
                if (matrix[i][j] > 0) {
                    sumPositive += matrix[i][j];
                }

                // arith mean odd nums
                if ((int)matrix[i][j] % 2 != 0) {
                    sumOdd += matrix[i][j];
                    countOdd++;
                }

                // sum main diagonal
                if (i == j) {
                    sumDiagonal += matrix[i][j];
                }
            }
        }

        // largest element + indexes
        float maxValue = matrix[0][0];
        int maxRow = 0, maxCol = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] > maxValue) {
                    maxValue = matrix[i][j];
                    maxRow = i;
                    maxCol = j;
                }
            }
        }

        printf("\nLargest element: %f with indexes [%d][%d]\n", maxValue, maxRow, maxCol);
        printf("Sum positive elements: %f\n", sumPositive);
        printf("Arithmetic mean of odd elements: %f\n", sumOdd / countOdd);
        printf("Sum of main diagonal: %f\n", sumDiagonal);

        // tri matrix under main diagonal
        printf("\nElements under main diagonal:\n");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i > j) {
                    printf("%f ", matrix[i][j]);
                }
                else {
                    printf("   ");
                }
            }
            printf("\n");
        }

        // tri matrix over main diagonal
        printf("\nElements over the main diagonal:\n");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i < j) {
                    printf("%f ", matrix[i][j]);
                }
                else {
                    printf("   ");
                }
            }
            printf("\n");
        }
    }
}


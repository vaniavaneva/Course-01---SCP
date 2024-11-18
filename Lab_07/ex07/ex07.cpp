#include <iostream>

int main()
{
    int n;
    float a[100], b[100], k;
    scanf_s("%d", &n);
    scanf_s("%f", &k);
    if (n <= 100) {
        printf("Array A:\n");
        for (int i = 0; i < n; i++) {
            printf("A[%d] ", i);
            scanf_s("%f", &a[i]);
        }
        printf("\n");
        for (int i = 0; i < n; i++) {
            b[i] = a[i] * k;
            printf("a[%f] * %f = b[%d] %f\n", a[i], k, i, b[i]);
        }
        printf("\n");
        printf("Array B: \n");
        for (int i = 0; i < n; i++) {
            printf("B[%d] %f\n", i, b[i]);
        }
    }
}
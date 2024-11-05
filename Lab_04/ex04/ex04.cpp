#include <iostream>

int main()
{
    int n, x;
    int sum = 0;
    scanf_s("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &x);
        if (x < 0) {
            sum += x;
        }
    }
    printf("Negative sum = %d", sum);
}
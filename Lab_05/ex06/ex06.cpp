#include <iostream>

int main()
{
    int n, m, s;
    scanf_s("%d", &n);
    scanf_s("%d", &m);
    scanf_s("%d", &s);
    printf("\n");
    while (m >= n) {
        if (m % 2 == 0 && m % 3 == 0) {
            if (m == s) {
                break;
            }
            else {
                printf("%d ", m);
            }
        }
        m--;
    }
}
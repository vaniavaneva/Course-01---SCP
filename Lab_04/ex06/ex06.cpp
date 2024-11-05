#include <iostream>

int main()
{
    int n, a = 0, b = 1, next;
    scanf_s("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n\n");

    int y = 1, c = 0, d = 1, next1;
    while (y <= n) {
        printf("%d ", c);
        next1 = c + d;
        c = d;
        d = next1;
        y++;
    }
    printf("\n\n");

    int z = 1, e = 0, f = 1, next2;
    do {
        printf("%d ", e);
        next2 = e + f;
        e = f;
        f = next2;
        z++;
    } while (z <= n);
}

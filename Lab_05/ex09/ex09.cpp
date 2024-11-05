#include <iostream>

int main()
{
    int a, b;
    scanf_s("%d", &a);
    scanf_s("%d", &b);
    if (a < b && a > 0) {
        while (a <= b) {
            if (a % 3 == 0) {
                printf("%d, ", a);
            }
            a++;
        }
    }
    else {
        printf("a < b & a,b > 0.");
    }
}
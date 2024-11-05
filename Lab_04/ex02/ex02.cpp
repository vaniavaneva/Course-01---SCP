#include <iostream>

int main()
{
    for (int x = 5; x <= 100; x++) {
        if (x % 5 == 0) {
            printf("%d\n", x);
        }
    }
}
#include <iostream>

int main()
{
    int a, b;
    printf("Before swapping\n");
    printf("a: ");
    scanf_s("%d", &a);
    printf("b: ");
    scanf_s("%d", &b);
    int temp = a;
    int *pa = &temp;
    int *pb = &b;
    a = *pb;
    b = *pa;
    printf("After swapping\n");
    printf("a: %d\n", a);
    printf("b: %d", b);
}
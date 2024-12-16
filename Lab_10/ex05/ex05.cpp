#include <iostream>

void Swap(int*, int*);

int main()
{
    int a, b;
    printf("Before swapping: \n");
    printf("A: ");
    scanf_s("%d", &a);
    printf("B: ");
    scanf_s("%d", &b);
    Swap(&a, &b);
    printf("\nAfter swapping: \n");
    printf("A: %d", a);
    printf("B: %d", b);
    return 0;
}

void Swap(int* pa, int* pb) {
    int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
    return;
}
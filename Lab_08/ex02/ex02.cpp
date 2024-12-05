#include <iostream>

int main()
{
    int array[10];
    int* pointer = array;
    for (int i = 0; i < 10; i++) {
        scanf_s("%d", &array[i]);
    }
    printf("Array printed with []\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }

    printf("\n\nArray printed with *\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", *(array + i));
    }

    printf("\n\nArray printed with pointers\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", *pointer);
        *pointer++;
    }
}
